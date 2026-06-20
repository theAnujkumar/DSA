#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* addNodes(Node* head, int n, int m)
{
    Node* curr = head;
    while(curr)
    {
        // for skipping nodes
        for(int i=1 ; i<m && curr ; i++)
        {
            curr = curr->next;
        }
        if(curr == NULL)
        {
            break;
        }

        // for sum of n nodes
        Node* lastNode = NULL;
        Node* temp = curr->next;
        int sum = 0;
        for(int i=0 ; i<n && temp ; i++)
        {
            sum += temp->data;
            lastNode = temp;
            temp = temp->next;
        }
        // Agar M nodes ke baad koi node hi nahi bachi
        if(lastNode == NULL)
        {
            break;
        }

        // normally add newNode at right place
        Node* newNode = new Node(sum);
        newNode->next = temp;
        lastNode -> next = newNode;

        curr = temp;
    }
    return head;
}