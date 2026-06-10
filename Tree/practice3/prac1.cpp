#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root)
{
    queue<node* > q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " " << endl;
            if(temp->left) 
                q.push(temp->left);
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void buildFromLevelOrder(node* &root) 
{
    queue<node*> q;
    int data;
    cout << "enter the data " << endl;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "enter the left data of " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if(data != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "enter the right data of " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if(data != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    return 0;
}