#include<iostream>
#include<queue>
#include<map>
#include<vector>
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
  public:
    void solve(Node* root, vector<int> &ans , int level)
    {
        if(root == NULL)
        {
            return;
        }
        
        // we enter into new level
        if(level == ans.size())
        {
            ans.push_back(root->data);
        }
        solve(root->left,ans,level+1);
        solve(root->right,ans,level+1);
        
    }
    vector<int> leftView(Node *root) {
        
        vector<int> ans;
        solve(root,ans,0);
        return ans;
    }
};