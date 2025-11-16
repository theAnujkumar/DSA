#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
}; 

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  
    pair<bool,int> isSumTreeFast(Node* root)
        {
            // base case
        if(root == NULL)
        {
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        // for leaf node
        if(root->left == NULL && root->right == NULL)
        {
            pair<bool,int> p = make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> leftAns = isSumTreeFast(root->left);
        pair<bool,int> rightAns = isSumTreeFast(root->right);
        
        /*
        bool left = leftAns.first;
        bool right = rightAns.first;
        
        bool cond = root->data == leftAns.second + rightAns.second;
        
        pair<bool,int> ans ;
        
        if(left && right && cond)
        {
            ans.first = true;
            ans.second = 2*root->data;
        }
        else{
            ans.first = false;
        }
        return ans;
        }
        */
        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;
        
        int leftSum = leftAns.second;
        int rightSum = rightAns.second;
        
        bool cond = root->data == leftSum + rightSum;
        pair<bool,int> ans ;
        
        if(isLeftSumTree && isRightSumTree && cond)
        {
            ans.first = true;
            ans.second = root->data + leftSum + rightSum;
        }
        else{
            ans.first = false;
        }
        return ans;
        }
        
        
    bool isSumTree(Node* root) {
        return isSumTreeFast(root).first;
    }
};