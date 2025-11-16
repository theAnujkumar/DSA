#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void kSum(Node *root,int k,int &cnt,vector<int> path)
{
    if(root->data == NULL)
    {
        return;
    }
    path.push_back(root->data);

    kSum(root->left,k,cnt,path);
    kSum(root->right,k,cnt,path);

    int sum = 0;
    int n = path.size();
    for(int i=n-1 ; i>=0 ; i--)
    {
        sum += path[i];
        if(sum == k)
            cnt++;
    }
    path.pop_back();
}

int sumK(Node *root,int k)
{
    vector<int> path;
    int cnt;
    kSum(root,k,cnt,path);
    return cnt;
}

Node* solve(Node *root, int &k, int node)
{
    if(root == NULL)
        return NULL;
    if(root->data == node)
        return root;

    Node* leftAns = solve(root->left,k,node);
    Node* rightAns = solve(root->right,k,node);

    if(leftAns != NULL || rightAns == NULL)
    {
        k--;
        if(k<=0)  
            k = INT_MAX;
            return root;
        return leftAns;
    }
    if(rightAns != NULL || leftAns == NULL)
    {
        k--;
        if(k<=0)  
            k = INT_MAX;
            return root;
        return rightAns;
    }
    return NULL;
}
int kthAncestor(Node *root, int k, int node)
{
    Node *ans = solve(root,k,node);
    if(ans == NULL || ans->data == node)
    {
        return -1;
    }   
    return ans->data;
}

pair<int,int> solved(Node *root)
{
    if(root == NULL)
    {
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> leftAns =  solved(root->left);
    pair<int,int> rightAns =  solved(root->right);

    pair<int,int> result;
    result.first = root->data + leftAns.second + rightAns.second;
    result.second = max(leftAns.first,leftAns.second) + max(rightAns.first,rightAns.second);
    return result;
}

int getMaxSum(Node *root) 
{
    pair<int,int> ans = solved(root);
    
    return max(ans.first,ans.second);
}