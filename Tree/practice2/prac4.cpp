// height = no of leaf nodes b/w root node and child node

// tc = O(n)
//  sc = O(height) = O(n) in worst case like screw tree

#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node == NULL)
        {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        int ans = max(left,right)+1;
    }

    int diameter(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }

        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + height(root->right);

        int ans = max(op1,max(op2,op3));
    }
};
