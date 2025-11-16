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
        this->left = NULL;
        this->right = NULL;
    }

};

Node* insertToBst(Node* root,int d)
{
    // base case
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root->data)
    {
        // right part me bhejna hai
        root->right = insertToBst(root->right , d);
    }
    else{
        root->left = insertToBst(root->left , d);
    }

    return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);       // seperator

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

            cout << temp->data << " ";
            if(temp->left)  // not equal to null
            {
                q.push(temp->left);
            }
            if(temp->right)  // not equal to null
            {
                q.push(temp->right);
            }
        }
        
    }
}

void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while(data != -1)
    {
        root = insertToBst(root,data);
        cin >> data;
    }
}

void inorder(Node* root)
{
    // base case
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right);
}

void preorder(Node* root)
{
    // base case
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " " ;
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    // base case
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " " ;
}

Node* minVal(Node* root)
{
    Node* temp = root;
    while(temp -> left != NULL)
    {
        temp = temp -> left;
    }
    return temp;
}

Node* maxVal(Node* root)
{
    Node* temp = root;
    while(temp -> right != NULL)
    {
        temp = temp -> right;
    }
    return temp;
}

Node* deleteFromBst(Node* root , int val)
{
    // base case
    if(root == NULL)
    {
        return root;
    }

    if(root->data == val)
    {
        // 0 child
        if(root->left == NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child

        // only left child
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // only right child
        if(root->right != NULL && root->left == NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->right != NULL && root->left != NULL)
        {
            // left me se maximum value nikal lo
            // right me se minimum value nikal lo

            int mini = minVal(root->right)->data;
            root->data = mini;
            // root ke right me se delete karenga min value ko
            root->right = deleteFromBst(root->right,mini);
            return root;

            //      OR
            // int maxi = maxVal(root->left)->data;
            // root->data = maxi;
            // root->left = deleteFromBst(root->left,maxi);
            // return root;
        }
    }

    if(root->data > val)
    {
        root->left = deleteFromBst(root->left ,val);
        return root;
    }

    else{
        root->right = deleteFromBst(root->right ,val);
        return root;
    }

}

int main()
{
    Node *root = NULL;

    cout << "enter data to create bst" << endl;
    takeInput(root);

    cout << "printing bst" << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal" << endl;
    inorder(root);

    cout << "preorder traversal" << endl;
    preorder(root);

    cout << "postorder traversal" << endl;
    postorder(root);

    // insertion TC = O(logn)

    cout << "min value is " << minVal(root)->data << endl;
    cout << "max value is " << maxVal(root)->data << endl;

    // deletion 
    // tc = O(n)
    root = deleteFromBst(root,30);

    cout << "printing bst" << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal" << endl;
    inorder(root);

    cout << "preorder traversal" << endl;
    preorder(root);

    cout << "postorder traversal" << endl;
    postorder(root);

    // insertion TC = O(logn)

    cout << "min value is " << minVal(root)->data << endl;
    cout << "max value is " << maxVal(root)->data << endl;

    return 0;
}
// inorder predecessor
// inorder successor

// 50 20 70 10 30 90 110 -1
// properties
// 1. bst ka inorder traversal sorted , 2. left me sabh chota and right me bada