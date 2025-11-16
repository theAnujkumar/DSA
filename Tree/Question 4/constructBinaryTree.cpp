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
// int findPos(int in[],int element , int n)
// {
//     for(int i=0 ; i<n ; i++)
//     {
//         if(in[i] == element)
//         {
//             return i;
//         }
//         return -1;
//     }
// }

void createMapping(int in[],map<int,int> &mp , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int ele = in[i];
        mp[ele] = i;
    }
}


Node* solve(int in[] , int pre[] ,int &index,int inorderStart, int inorderEnd ,int n ,map<int,int> mp)
{
    // base case
    if(index >= n || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // find the 1st element from preorder
    // create root node for element
    int element = pre[index++];
    Node *root = new Node(element);

    //int pos = findPos(in,element,n);

    // find the position of element in inorder
    int pos = mp[element];

    root->left = solve(in,pre,index,inorderStart,pos-1,n,mp);
    root->right = solve(in,pre,index,pos+1,inorderEnd,n,mp);

    return root;

}
Node* buildTree(int in[] , int pre[] , int n)
{
    int preorderIndex = 0;
    map<int,int> mp ;
    createMapping(in,mp,n);
    Node* ans = solve(in,pre,preorderIndex,0,n-1,n,mp);
    return ans;
}

// tc = O(Nlogn) due to map
// sc = O(N)