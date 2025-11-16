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

void createMapping(int in[],map<int,int> mp , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int ele = in[i];
        mp[ele] = i;
    }
}

Node* solve(int in[],int pre[],int &index,int inorderStart , int inorderEnd , int n,map<int,int> mp)
{
    int element = pre[index++];
    Node* root = new Node(element);

    int pos = mp[element];

    root->left = solve(in,pre,index,inorderStart,pos-1,n,mp);
    root->right = solve(in,pre,index,pos+1,inorderEnd,n,mp);

    return root;
}

Node* buildTree(int in[] , int pre[] , int n)
{
    int preorderIndex = 0;
    map<int,int> mp;
    createMapping(in,mp,n);
    Node* ans = solve(in,pre,preorderIndex,0,n-1,n,mp);
    return ans;
}