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

Node* reverseLinkedList(Node* &head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }

    
        Node *prev = NULL;
        Node *curr = head;
        Node *forward = NULL;

        while(curr!=NULL)
        {
            forward = curr->next;   // forward curr ke next me jayenga
            curr->next = prev;
            prev = curr;            // prev lie on curr
            curr = forward;
        }

    return prev;
}

Node* pairsSwap(Node *head)
{

    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* first = head;
    Node* second = head->next;

    // change pointers of 1,2
    // 3,4 ka recursive khud solve kar dega
    first->next = pairsSwap(second->next);
    second->next = first;

    return second;

    // if head->next = null  , no swap pair
    // else swap pair


    // Node* temp = head;
    // Node* temp_next = head->next;
    // while(temp_next)
    // {
    //     Node* ans = reverseLinkedList(temp);
    //     temp = temp_next;
    //     temp_next = temp_next->next;
    // }
}