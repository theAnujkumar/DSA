#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void inorder(Node* root,vector<int> v)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);

}
bool isBst(Node* root)
{
    vector<int> v;
    inorder(root,v); 
    for(int i=1 ; i<v.size() ; i++)
    {
        if(v[i] < v[i-1])
        {
            return false;
        }
    }  
    return true; 
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    root->right->right = new Node(20);

    if(isBst(root))
    {
        cout << "valid bst" << endl; 
    }
    else{
        cout << "Invalid bst" << endl; 
    }
}
