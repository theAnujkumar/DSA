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

Node* removeKthNode(Node* head, int K)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* fast = head;

    // move fast pointer kth times
    for(int i=0 ; i<K ; i++)
    {
        fast = fast->next;
    }

    // delete head node
    if(fast == NULL)
    {
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;

        return head;
    }

    Node* slow = head;
    while(fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    // take node that we want to delete
    Node* temp = slow->next;

    slow->next = temp->next;
    temp->next = NULL;
    delete temp;

    return head;
}

/*
Complexity
Time: O(n) (sirf ek traversal)
Space: O(1)
*/

/*
Method	        Time	Traversals
Length Count	O(n)	2
Two Pointer 	O(n)	1
*/