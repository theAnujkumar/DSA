// bst already cbt so no change in structure
// min-heap  = minorder property L<R


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

void inorderTraversal(Node* root , vector<int> &arr)
{
    vector<int> ans;

    if(root==NULL)
    {
        return ;
    }

    inorderTraversal(root->left , arr);
    ans.push_back(root->data);
    inorderTraversal(root->right , arr);
}

void preorderFill(Node* root,vector<int> &arr, int index)
{
    if(root == NULL)
    {
        return;
    }

    root->data = arr[index++];
    preorderFill(root->left,arr,index);
    preorderFill(root->right,arr,index);
}

// Function to convert BST to Min Heap
Node* BSTtoHeap(Node* root)
{
    vector<int> inorderArr;

    // Step 1: Perform inorder traversal 
    // to store values in sorted order
    inorderTraversal(root,inorderArr);

    int index = 0;

    // Step 2: Perform preorder traversal and 
    // fill nodes with inorder values
    preorderFill(root,inorderArr,index);

}

// Function to print preorder traversal of the tree
void preorderPrint(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " "; 
    preorderPrint(root->left); 
    preorderPrint(root->right); 
}

int main()
{
    // Constructing the Binary Search Tree (BST)
    //          4
    //        /   \
    //       2     6
    //      / \   / \
    //     1   3 5   7
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    BSTtoHeap(root);
    preorderPrint(root);
}

/*
// Javascript implementation to convert the given
// BST to Min Heap
class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

// Function to perform inorder traversal of the BST
// and store the node values in an array
function inorderTraversal(root, inorderArr) {
    if (root === null) {
        return;
    }

    // Traverse the left subtree, store the 
    // current node value, and traverse
    // the right subtree
    inorderTraversal(root.left, inorderArr);
    inorderArr.push(root.data);
    inorderTraversal(root.right, inorderArr);
}

// Function to perform preorder traversal of the tree
// and copy the values from the inorder 
// array to the nodes
function preorderFill(root, inorderArr, index) {
    if (root === null) {
        return index;
    }

    // Copy the next element from the inorder array
    root.data = inorderArr[index];
    index += 1;

    // Fill left and right subtree
    index = preorderFill(root.left, inorderArr, index);
    index = preorderFill(root.right, inorderArr, index);
    
    return index;
}

// Function to convert BST to Min Heap
function convertBSTtoMinHeap(root) {
    let inorderArr = [];

    // Step 1: Perform inorder traversal to 
    // store values in sorted order
    inorderTraversal(root, inorderArr);

    // Step 2: Perform preorder traversal 
    // and fill nodes with inorder values
    preorderFill(root, inorderArr, 0);
}

// Function to print preorder traversal of the tree
function preorderPrint(root) {
    if (root === null) {
        return;
    }

    console.log(root.data + " ");
    preorderPrint(root.left);
    preorderPrint(root.right);
}

// Constructing the Binary Search Tree (BST)
//          4
//        /   \
//       2     6
//      / \   / \
//     1   3 5   7
let root = new Node(4);
root.left = new Node(2);
root.right = new Node(6);
root.left.left = new Node(1);
root.left.right = new Node(3);
root.right.left = new Node(5);
root.right.right = new Node(7);

convertBSTtoMinHeap(root);
preorderPrint(root);
*/