#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

// your task is to complete this function
Node *solve(Node *root, int &k, int node)
{
    if(root==NULL)
        return NULL;
        
    if(root->data == node)
    {
        return root;
    }
    
    Node *leftAns = solve(root->left , k , node);
    Node *rightAns = solve(root->right , k , node);
    
    // wapas
    if(leftAns != NULL && rightAns == NULL)
    {
        k--;
        if(k<=0)
        {
            // ans look
            k = INT_MAX;
            
            return root;
        }
        return leftAns;
    }
    
    if(leftAns == NULL && rightAns != NULL)
    {
        k--;
        if(k<=0)
        {
            // ans lock so that ans zero par na pahuch paye fhir se
            k = INT_MAX;
            
            return root;
        }
        return rightAns;
    }
    return NULL;
    
}
int kthAncestor(Node *root, int k, int node)
{
    Node *ans = solve(root,k,node);
    
    if(ans == NULL || ans->data == node)
        return -1;
    
    else
        return ans->data;
}