#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;
    //Following is the Binary Tree node structure

template <typename T>
    class TreeNode {
      public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    // base case
    if(root == NULL)
    {
        return NULL;
    }

    if(root->data < P->data && root->data < Q->data)
    {
        return LCAinaBST(root->right,P,Q);
    }

    if(root->data > P->data && root->data > Q->data)
    {
        return LCAinaBST(root->left,P,Q);
    }

    else{
        return root;
    }
// tc and sc = O(n)

/*
    while(root != NULL)
    {
        if(root->data < P->data && root->data < Q->data)
        root = root->right;

        else if(root->data > P->data && root->data > Q->data)
        root = root->left;

        else{
            return root;
        }
    }
*/
// tc = O(N)
// sc = O(1)
}