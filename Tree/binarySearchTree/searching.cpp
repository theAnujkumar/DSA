
#include<iostream>
#include<queue>
using namespace std;
/*
    Following is the Binary Tree node structure:
*/
    template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };



// tc = O(H) = O(N)
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // base case

    // if not found element 
    if(root == NULL)
    {
        return false;
    }

    if(root->data == x)
    {
        return true;
    }

    // left part me
    if(root->data > x)
    {
        return searchInBST(root->left,x);
    }

    // right part me
    else{
        return searchInBST(root->right,x);
    }
}

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    
    BinaryTreeNode<int> *temp = root;

    while(temp != NULL)
    {
        if(temp->data == x)
        {
            return true;
        }

        if(temp->data > x)
        {
            temp = temp->left;
        }

        else{
            temp = temp->right;
        }
    }
    return false;
}
// tc = O(1)