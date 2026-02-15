#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
    private:
    int countNode(Node* tree)  // O(N)
    {
    if(tree == NULL)
        return 0;

    int ans = 1 + countNode(tree->left) + countNode(tree->right);
    return ans;
    }
    
    bool isCBT(Node *tree , int index , int cnt)    // O(N)
    {
    if(tree == NULL)
        return true;

    if(index >= cnt)
        return false;

    else{
        bool left = isCBT(tree->left , 2*index+1 , cnt);
        bool right = isCBT(tree->right , 2*index+2 , cnt);
        return(left && right);
        }
    }
    
    bool isOrderMax(Node* tree)         // O(N)
    {
    if(tree->left == NULL && tree->right == NULL)
    {
        return true;
    }
    if(tree->right == NULL)
    {
        return(tree->data > tree->left->data);
    }
    else{
        bool left = isOrderMax(tree->left);
        bool right = isOrderMax(tree->right);
        return(left && right && (tree->data > tree->left->data && tree->data > tree->right->data));
        }
    }        

  public:
    bool isHeap(Node* tree) {
        // code here
        int index = 0 ;
        int totalcount = countNode(tree);
        
        if(isCBT(tree,index,totalcount) && isOrderMax(tree))
            return true;
        else    
            return false;
    }
};

/*
Kth Smallest element: https://practice.geeksforgeeks.org/pr...
Merge 2 Heaps:https://practice.geeksforgeeks.org/pr...
Is Tree a Heap: https://practice.geeksforgeeks.org/pr...
Min Cost of "n" ropes:https://practice.geeksforgeeks.org/pr...
Convert BST into HEAP: https://www.geeksforgeeks.org/convert...
*/