#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = left;
        this->right = right;
    }
};

Node* buildTree(Node* root)
{
    int data;
    cin >> data;
    cout << "enter the data" << endl;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "enter the data for left node of " << root << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

Node* insertToBst(Node* root , int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root->data)
    {
        root->right = insertToBst(root->right,d);
    }
    else{
        root->left = insertToBst(root->left,d);
    }
    return root;
}

void takeinput(Node* root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        /* code */
        insertToBst(root,data);
        cin >> data;
    }
    
}

void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

bool search(Node* root,int n)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->data == n)
    {
        return 1;
    }
    if(n > root->data)
    {
        search(root->right,n);
    }
    else{
        search(root->left,n);
    }
}

bool searchInBst(Node* root,int n)
{
    Node* temp = root;
    while(temp != NULL)
    {
        if(temp->data == n)
    {
        return 1;
    }
    if(n > temp->data)
    {
        search(temp->right,n);
    }
    else{
        search(temp->left,n);
    }
    }
    return 0;
}

Node* minVal(Node* root)
{
    Node* temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root)
{
    Node* temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* deleteBst(Node* root,int val)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data == val)
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if(root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            return root;
        }
    }
    if(val<root->data)
    {
        root->left = deleteBst(root->left,val);
        return root;
    }
    else{
        root->right = deleteBst(root->right,val);
        return root;
    }
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);

    cout << "enter data to create bst" << endl;
    takeinput(root);
}