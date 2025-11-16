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

class Solution {
    private:
        int height(struct Node* node){
        //base case
        if(node == NULL) {
            return 0;
        }

        int left = height(node ->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;

    }
    
  public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node* root) {
        
        if(root == NULL)
        {
            return true;
        }
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs (height(root->left) - height(root->right)) <= 1;
        
        if(left && right && diff)
        {
            return 1;
        }
        else{
            return 0;
        }
        
    }
};
// tc = O(n^2)

/*
class Solution {
    
  public:
    // Function to check whether a binary tree is balanced or not.
    pair<bool,int> balancedFast(Node* root)
    {
        if(root == NULL)
        {
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        pair<bool , int> left = balancedFast(root->left);
        pair<bool , int> right = balancedFast(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs (left.second - right.second) <= 1;
        
        pair<bool ,int> ans;
        ans.second = max(left.second , right.second) + 1;
        
        if(leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    
    bool isBalanced(Node* root) {
        
        return balancedFast(root).first;
        
    }
};
*/
// tc = O(n)
// sc = O(Height) = O(n)