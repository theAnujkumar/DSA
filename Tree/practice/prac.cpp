#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* createtree(Node* root)
{
    int data;
    cout << "enter data";
    cin >> data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "left child of data " << data ;
    root->left = createtree(root->left);

    cout << "right child of data " << data ;
    root->right = createtree(root->right);

}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
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
            cout << "temp ka data " << temp->data << endl;
            if(temp->left)
            {
                q.push(temp->left);
            }
        }
    }
}

void buildFromLevelOrder(Node* root)
{
    queue<Node*> q;
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << "enter the left data of " << temp;
        int leftdata;
        cin >> leftdata;

        if(leftdata != -1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
    }
}

Node* insertToBst(Node* root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(data > root->data)
    {
        root->right = insertToBst(root->right,data);
    }
    else{
        root->left = insertToBst(root->left,data);
    }
    return root;
}

void inorder(Node* root)
{
    if(root == NULL)
    {
        return ;
    }

    inorder(root->left);
    cout << root->data << " " << endl;
    inorder(root->right);
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