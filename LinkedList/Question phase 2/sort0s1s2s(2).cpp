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

void insertAtTail(Node* &tail , Node* curr)
{
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head){
    
    // make dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    // create separate list of 0,1,2
    while(curr != NULL)
    {
        int value = curr->data;

        if(value == 0)
        {
            insertAtTail(zeroTail,curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail,curr);
        }
        else if(value == 2)
        {
            insertAtTail(twoTail,curr);
        }

        curr = curr->next;
    }

    // merge three list

    // if list is not empty

    if(oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }

    else
    {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup head 
    head = zeroHead->next;

    // delete dummy nodes
    delete (zeroHead);
    delete(oneHead);
    delete(twoHead);

    return head;
}

// Tc = O(n)+O(1)+O(1)+O(n) = O(n)
// Sc = O(1)