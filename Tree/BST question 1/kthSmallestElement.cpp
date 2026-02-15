#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;
 
    //Following is the Binary Tree node structure
template <typename T>
    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

int solve(BinaryTreeNode<int>* root, int &i , int k)
{
    if(root == NULL)
    {
        return -1;
    }
    // L
    int left = solve(root->left,i,k);

    if(left != -1)
    {
        return left;
    }
    // N
    // data ko process kar rhe ho
    i++;
    if(i==k)
    {
        return root->data;
    }
    // R
    solve(root->right,i,k);
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    
    int i=0;
    int ans = solve(root,i,k);
    return ans;
}


// 2nd
void solved(BinaryTreeNode<int>* root,int &k , int &ans)
{
    if(root == NULL)
    {
        return;
    }

    solved(root->left,k,ans);

    k--;
    if(k==0)
    {
        ans = root->data;
        return ;
    }

    solved(root->right,k,ans);
}

int kthSmallest(BinaryTreeNode<int>* root, int k)
{
    int ans = -1;
    solved(root,k,ans);
    return ans;
}

// n-k+1 = greatest
// O(N)