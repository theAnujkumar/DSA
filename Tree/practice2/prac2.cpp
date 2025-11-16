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
    


// void inorder(BinaryTreeNode<int> *root)
// {
//     if(root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data;
//     inorder(root->right);

// }

bool bst(BinaryTreeNode<int> *root,long long minVal, long long maxVal)
{
    if(root == NULL)
    {
        return true;
    }
    if(root->data >= minVal && root->data <= maxVal)
    {
        bool left = bst(root->left,minVal,root->data);
        bool right = bst(root->left,root->data,maxVal);
        return left && right;
    }
    else{
        return false;
    }
}

bool validateBST(BinaryTreeNode<int> *root) {
    return bst(root,LONG_LONG_MIN,LONG_LONG_MAX);
    // inorder(root);
}

pair<int, int> predecessorSuccessor(BinaryTreeNode *root, int key)
{
    BinaryTreeNode* temp = root;
    int succ = -1;
    int pred = -1;

    while(temp->data != key)
    {
        if(temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    BinaryTreeNode* leftTree = temp->left;
    BinaryTreeNode* rightTree = temp->right;

    while(leftTree)
    {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }
    while(rightTree)
    {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    pair<int,int> ans = make_pair(pred,succ);
    return ans;
}

int solve(BinaryTreeNode<int>* root,int &i, int k)
{
    if(root == NULL)
    {
        return -1;
    }

    solve(root->left,i,k);

    i++;
    if(i==k)
    {
        return root->data;
    }

    solve(root->right,i,k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k)
{
    int i=0;
    int ans = solve(root,i,k);
    return ans;
}

