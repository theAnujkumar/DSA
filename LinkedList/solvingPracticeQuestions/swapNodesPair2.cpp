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

Node* pairsSwap(Node* head)
{

    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;

    Node* head = head->next;

    while(curr && curr->next)
    {
        Node* first = curr;
        Node* second = curr->next;
        Node* nextPair = second->next;

        // swap 1,2 to 2,1
        first->next = nextPair;
        second->next = first;

        if(prev != NULL)
        {
            // it is important point
            prev->next = second;
        }
        prev = first;
        curr = nextPair;
    }
    // if(head == NULL || head->next == NULL)
    //     return head;

    // Node* prev = NULL;
    // Node* curr = head;

    // // New head will be second node
    // head = head->next;

    // while(curr != NULL && curr->next != NULL)
    // {
    //     Node* first = curr;
    //     Node* second = curr->next;

    //     Node* nextPair = second->next;

    //     // Swap
    //     second->next = first;
    //     first->next = nextPair;

    //     // Connect previous pair with current swapped pair
    //     if(prev != NULL)
    //     {
    //         prev->next = second;
    //     }

    //     // Update pointers
    //     prev = first;
    //     curr = nextPair;
    // }

    return head;
}