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

pair<bool,int> isSumTreeFast(Node* root)
{
    if(root == NULL)
    {
        pair<bool,int>p = make_pair(true,0);
        return p;
    }

    if(root->left==NULL && root->right==NULL)
    {
        pair<bool,int>p = make_pair(true,root->data);
    }

    pair<bool,int>left = isSumTreeFast(root->left);   
    pair<bool,int>right = isSumTreeFast(root->right);
    
    int sum = left.second + right.second;
    bool istrue = root->data == sum;

    pair<bool,int> ans;

    if(left.first && right.first && istrue){
        ans.first = true;
        ans.second = sum + root->data;
        return ans;
    }
    else{
        ans.first = true;
        ans.second = sum + root->data;
        return ans;
    }
}

vector <int> zigZagTraversal(Node* root)
{
    vector<int> result;
    
    if(root==NULL)
    {
        return result;
    }

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while(!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        for(int i=0 ; i<size ; i++)
        {
            Node* frontval = q.front();
            q.pop();

            int index = leftToRight ? i : size-i-1;
            ans[index] = frontval->data;

            if(frontval->left)
            {
                q.push(frontval->left);
            }
        }
        leftToRight = !leftToRight;
        for(auto i : ans)
        {
            result.push_back(i);
        }
    }

    return result;
}