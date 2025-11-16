
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

    if(root == NULL)
    {
        return NULL;
    }

    if(root->data == x)
    {
        return 1;
    }

    if(root->data > x)
    {
        return searchInBST(root->left,x);
    }

    if(root->data < x)
    {
        return searchInBST(root->right,x);
    }
}

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int> *temp = root;
    while (temp!=NULL)
    {
        if(temp->data == x)
        {
            return true;
        }
        if(temp->data > x)
        {
            temp = temp->left;
        }
        if(temp->data < x)
        {
            temp = temp->right;
        }
    }
    return false;
    
}
// tc = O(1)