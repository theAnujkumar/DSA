#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;
    //Following is the Binary Tree node structure

template <typename T>
    class BinaryTreeNode {
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
    


BinaryTreeNode *LCAinaBST(BinaryTreeNode *root, BinaryTreeNode *P, BinaryTreeNode *Q)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root->data < P->data && root->data < Q->data)
    {
        LCAinaBST(root->right,P,Q);
    }

    if(root->data > P->data && root->data > Q->data)
    {
        LCAinaBST(root->left,P,Q);
    }
    else{
        return root;
    }
}