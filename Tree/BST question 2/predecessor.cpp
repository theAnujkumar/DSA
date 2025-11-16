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
    

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // find key
    TreeNode *temp = root;
    int pred = -1;
    int succ = -1;

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

    // predecessor
    // left part me sabse bada
    TreeNode *leftTree = temp->left;
    while(leftTree != NULL)
    {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    // successor 
    // right part me sabse chote value
    TreeNode *rightTree = temp->right;
    while(rightTree != NULL)
    {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    pair<int,int> ans = make_pair(pred,succ);
    return ans;
    //return {pred,succ};

    // tc = O(n)
    // sc = O(1)
}

/*
    how to go left and right till atmost
*/