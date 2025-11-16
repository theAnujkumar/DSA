#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void createMapping(int in[],map<int,int> &mp , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int ele = in[i];
        mp[ele] = i;
    }
}


Node* solve(int in[] , int post[] ,int &index,int inorderStart, int inorderEnd ,int n ,map<int,int> mp)
{
    // base case
    if(index <= 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // find the 1st element from preorder
    // create root node for element
    int element = post[index--];
    Node *root = new Node(element);

    // find the position of element in inorder
    int pos = mp[element];

    root->right = solve(in,post,index,pos+1,inorderEnd,n,mp);
    root->left = solve(in,post,index,inorderStart,pos-1,n,mp);

    return root;

}
Node* buildTree(int in[] , int post[] , int n)
{
    int postorderIndex = n-1;
    map<int,int> mp ;
    createMapping(in,mp,n);
    Node* ans = solve(in,post,postorderIndex,0,n-1,n,mp);
    return ans;
}

// tc = O(Nlogn) due to map
// sc = O(N)