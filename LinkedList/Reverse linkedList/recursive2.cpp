
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

// it will give head of reverse list
/*
    Sc = O(n*k) = O(n)  // k = constant value and n = no of nodes
    Tc = O(n)
*/
Node* reverse1(Node* head)
{
    // base case
    if(head==NULL || head->next=NULL)
    {
        return head;
    }

    Node* chotaHead = reverse1(head->next);
    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;
}

Node* reverseLinkedList(Node* head)
{
    reverse1(head);
}