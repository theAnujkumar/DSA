#include<iostream>
using namespace std;

template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    

void inorder(BinaryTreeNode<int> *root , int count)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left , count);
    if(root->left && root->right)
    {
        count++;
    }
    inorder(root->right , count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    int count = 0;
    inorder(root,count);
    return count;
}

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }  
};

int height(struct Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left,right) + 1;
    return ans;
}

int diameter(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1 , max(op2,op3));
    return ans;
}

pair<int,int> diameterFast(Node* root)
{
    if(root == NULL)
    {
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    int diameter = max(op1 , max(op2,op3));
    int height = max(left.second , right.second) + 1;

    pair<int,int> ans;
    ans.first = diameter;
    ans.second = height;
    return ans;
}

int diameterNew(Node* root)
{
    return diameterFast(root).first;
}

bool isIdentical(Node* r1 , Node* r2)
{
    if(!r1 && !r2)
    {
        return true;
    }
    if(!r1 && r2)
    {
        return false;
    }
    if(r1 && !r2)
    {
        return false;
    }

    bool left = isIdentical(r1->left,r2->left);
    bool right = isIdentical(r1->right,r2->right);

    int value = r1->left == r2->left;

    if(left && right && value)
    {
        return true;
    }
    else{
        return false;
    }


}

bool isBalance(Node* root)
{
    if(root == NULL)
    {
        return true;
    }
    bool left = isBalance(root->left);
    bool right = isBalance(root->right);
    bool diff = abs(height(root->left)-height(root->right)) <= 1;

    if(left && right && diff)
    {
        return 1;
    }
    else{
        return 0;
    }
}

pair<bool,int> isBalance1(Node* root)
{
    if(root == NULL)
    {
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    pair<bool,int>left = isBalance1(root->left);
    pair<bool,int>right = isBalance1(root->right);
    bool diff = left.second-right.second <= 1;

    pair<bool,int> ans;
    ans.second = max(left.second,right.second) + 1;

    if(left.first && right.first && diff)
    {
        ans.first = 1;
    }
    else{
        ans.first = 0;
    }
}