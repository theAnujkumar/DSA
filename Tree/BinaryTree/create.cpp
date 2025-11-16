#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

        node(int d)
        {
            this -> data = d;
            this -> left = NULL;
            this -> right  = NULL;
        }
};

node* buildTree(node* root)
{
    cout << "enter data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "enter the left value for " << data << " node" << endl;
    root->left = buildTree(root->left);
    cout << "enter the right value for" << data << "node" << endl;
    root->right = buildTree(root->right);
    return root;
}
int main()
{
    node *root = NULL;
    root = buildTree(root);

    return 0;
}