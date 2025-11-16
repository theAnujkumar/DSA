#include<iostream>
#include<queue>
#include<map>
#include<vector>
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


    // 1  nodetoparent mapping
    // 2  find target 
    // 3  use map for visited true and queue for time++
    // 3  burn tree in min tree


Node* createMapping(Node* root , int target , map<Node*,Node*> mp)
{
    Node* res = NULL;

    queue<Node*> q;
    q.push(root);
    mp[root] = NULL;

    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front->data == target)
        {
            res = front;
        }
        if(front->left)
        {
            mp[front->left] = front;
            q.push(front->left);
        }
        if(front->right)
        {
            mp[front->right] = front;
            q.push(front->right);
        }
    }

    return res;
}

int burnTree(Node* root,map<Node*,Node*> mp)
{
    map<Node*,bool> visited;
    queue<Node*> q;

    q.push(root);
    visited[root] = true;

    int ans = 0;
    while(!q.empty())
    {
        bool flag = 0;
        int size = q.size();
        for(int i=0 ; i<size ; i++)
        {
            Node* front = q.front();
            q.pop();

            if(front->left && !visited[front->left])
            {
                flag = 1;
                q.push(front->left);
                visited[front->left] = true;
            }
            if(front->right && !visited[front->right])
            {
                flag = 1;
                q.push(front->right);
                visited[front->right] = true;
            }
            if(mp[front] && !visited[front])
            {
                flag = 1;
                q.push(mp[front]);
                visited[mp[front]] = true;
            }
        }
        if(flag == 1)
        {
            ans++;
        }
    }
    return ans;

}

int minTree(Node* root , int target)
{
    int ans = 0;
    map<Node* , Node*> mp;
    Node* targetNode = createMapping(root,target,mp);
    burnTree(targetNode,mp);
    return ans;
}