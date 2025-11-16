#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};

void traverseLeft(Node *root , vector<int>&ans)
{
    if(root == NULL)
    {
        return ;
    }
    ans.push_back(root->data);

    if(root->left)
    {
        traverseLeft(root->left,ans);
    }
    else
        traverseLeft(root->right,ans);
}

void traverseLeaf(Node *root , vector<int>&ans)
{
    if(root == NULL)
    {
        return ;
    }
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }

    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
}

void traverseRight(Node *root , vector<int>&ans)
{
    if(root == NULL)
    {
        return ;
    }

    if(root->left)
    {
        traverseLeft(root->left,ans);
    }
    else
        traverseLeft(root->right,ans);
    
    ans.push_back(root->data);

}

vector <int> boundary(Node *root)
{
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }

        ans.push_back(root->data);

        traverseLeft(root->left,ans);
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
        traverseRight(root->right,ans);
}

int main()
{
    
}