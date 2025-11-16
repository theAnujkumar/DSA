// Tc = O(n/2) = O(n)
// Sc = O(1)


//Following is the class structure of the Node class:

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



// slow-fast method

Node* getMiddle(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    // 2 node
    if(head->next->next == NULL)
    {
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
    
}




Node *findMiddle(Node *head) {
    // Write your code here

    getMiddle(head);
}

/*
The function uses only two extra pointers:

Node* slow;
Node* fast;


These pointers take O(1) space (constant space).

No extra arrays, no recursion, no data structures → just two variables.
*/
