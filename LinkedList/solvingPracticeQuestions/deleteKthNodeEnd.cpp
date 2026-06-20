
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


int getLength(Node *head) {
    int len = 0;

    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
// O(n)

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.

    int n = getLength(head);

    // delete head/first node
    if(K == n)
    {
        Node* temp = head;
        head = head -> next;

        // memory free with first node
        temp -> next  = NULL;
        delete temp;
    }

    // delete mid or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 0;
        int pos = n-K;
        while(cnt < pos)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;

        // curr = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
    return head;
}
Node* reverseLinkedList(Node* &head)
{
    /*
    Node *prev = NULL;
    Node *curr = head;
    reverse(head,curr,prev);
    return head;
    */

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

Node* removeKthNode2(Node* head, int K)
{
    reverseLinkedList(head);

    // delete head/first node
    if(K == 1)
    {
        Node* temp = head;
        head = head -> next;

        // memory free with first node
        temp -> next  = NULL;
        delete temp;
    }

    // delete mid or last node
    else
    {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        int pos = K;
        while(cnt < pos)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;

        // curr = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

    reverseLinkedList(head);

    return head;
    // Write your code here.

    // int n = getLength(head);

    // // delete head/first node
    // if(K == 0)
    // {
    //     Node* temp = head;
    //     head = head -> next;

    //     // memory free with first node
    //     temp -> next  = NULL;
    //     delete temp;
    // }

    // // delete mid or last node
    // else{
    //     Node* curr = head;
    //     Node* prev = NULL;

    //     int cnt = 0;
    //     int pos = n-K;
    //     while(cnt < pos)
    //     {
    //         prev = curr;
    //         curr = curr -> next;
    //         cnt++;
    //     }
    //     prev -> next = curr -> next;

    //     // curr = curr -> next;
    //     curr -> next = NULL;
    //     delete curr;
    // }
    // return head;
}