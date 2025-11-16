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

vector<int> verticalOrder(Node *root)
{
    map<int,map<int,vector<int>>> nodes;
    queue<pair<Node* , pair<int,int>>> q;
    vector<int> ans;

    if(root == NULL)
    {
        return ans;
    }

    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty())
    {
        pair<Node* ,pair<int,int>> temp = q.front();
        q.pop();

        Node* frontVal = temp.first;
        int hd = temp.second.first;
        int level = temp.second.second;

        nodes[hd][level].push_back(frontVal->data);
        if(frontVal->left)
        {
            q.push(make_pair(root->left,make_pair(hd-1,level+1)));
        }
        if(frontVal->right)
        {
            q.push(make_pair(root->right,make_pair(hd+1,level+1)));
        }
    }
}

vector<int> topView(Node *root) 
{
    map<int,int> mp;
    queue<Node* ,int> q;
    vector<int> ans;

    if(root == NULL)
    {
        return ans;
    }

    q.push(make_pair(root->data,0));
    while(!q.empty())
    {
        pair<Node*,int> temp = q.front();
        q.pop();

        Node* frontVal = temp.first;
        int hd = temp.second;

        if(mp.find(hd) == mp.end())
        {
            mp[hd] = frontVal->data;
        }
        if(frontVal->left)
            q.push(make_pair(root->left,hd-1));
        if(frontVal->right)
            q.push(make_pair(root->right,hd+1));
    }
}

void solve(Node* root,vector<int> &ans,int level)
{
    if(root == NULL)
    {
        return ;
    }
    if(ans.size() == level)
    {
        ans.push_back(root->data);
    }
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> leftView(Node *root) 
{
    vector<int> ans;
    solve(root,ans,0);
    return ans;
}


void solveLeft(Node* root,vector<int> &ans,int level)
{
    if(root == NULL)
    {
        return ;
    }
    if(ans.size() == level)
    {
        ans.push_back(root->data);
    }
    solveLeft(root->right,ans,level+1);
    solveLeft(root->left,ans,level+1);
}
vector<int> rightView(Node *root)
{
    vector<int> ans;
    solveLeft(root,ans,0);
    return ans;
} 

void solve(Node* root, int sum, int &maxSum, int len, int &maxLen)
{
    if(root == NULL)
    {
        if(len < maxLen)
        {
            maxSum = sum;
            maxLen = len;
        }
        else if(len == maxLen)
        {
            maxSum = max(maxSum,sum);
        }
        return;
    }
    sum = sum + root->data;
    solve(root->left,sum,maxSum,len+1,maxLen);
    solve(root->right,sum,maxSum,len+1,maxLen);
}

int sumOfLongRootToLeafPath(Node *root)
{
    int len = 0;
    int maxLen = 0;
    int sum = 0;
    int maxSum = 0;

    solve(root,sum,maxSum,len,maxLen);

    return maxSum;
}

Node* lca(Node* root, int n1, int n2) 
{
    if(root == NULL)
        return NULL;

    if(root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node* leftAns = lca(root->left,n1,n2);
    Node* rightAns = lca(root->right,n1,n2);

    if(leftAns != NULL && rightAns != NULL)
        return root;
    
    else if(leftAns != NULL && rightAns == NULL)
        return leftAns;
    
    else if(leftAns == NULL && rightAns != NULL)
        return rightAns;
    else
        return NULL;
}