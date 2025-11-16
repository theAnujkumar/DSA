#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
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
***************/

void inOrder(BinaryTreeNode<int>* root, vector<int> &in)
{
    // base case
    if(root == NULL)
    return ;

    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);

}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {

	vector<int> inOrderVal;

    // store inorder in sorted ways
    inOrder(root,inOrderVal);

    // use 2 pointer approach to check if pair exist
    int i=0 , j=inOrderVal.size()-1;

    while(i<j)
    {
        int sum = inOrderVal[i] + inOrderVal[j];

        if(sum == target)
        {
            return true;
        }
        else if(sum > target)
        {
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
// tc and sc = O(N);