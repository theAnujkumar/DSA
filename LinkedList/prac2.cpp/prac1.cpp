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

void insertAtTail(Node* &tail , Node* curr)
{
    tail -> next = curr;
    tail = curr;
}

Node* sortListnew(Node* head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // create separate list
    Node* curr = head;
    while(curr)
    {
        int value = curr->data;

        if(value == 0)
        {
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1)
        {
            insertAtTail(oneTail,curr);
        }
        else
        {
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }

    // merge these list
    if(oneHead->next)
    {
        zeroTail ->next = oneHead->next;
    }
    else{
        zeroTail ->next = twoHead->next;
    }
    oneTail -> next = twoHead->next;
    twoTail->next = NULL;
    head = zeroHead->next;
    delete zeroHead,oneHead,twoHead;

    return head;
}

Node* sortList(Node *head)
{
    int count1,count2,count0 = 0;

    Node* temp = head;
    while(temp)
    {
        if(temp->data == 0)
        {
            count0++;
        }
        else if(temp->data == 1)
        {
            count1++;
        }
        else{
            count2++;
        }
        temp = temp->next;
    }
    temp = head;

    while(temp)
    {
        if (count0 != 0)
        {
            temp->data = 0;
            count0--;
        }
        else if (count1 != 0)
        {
            temp->data = 1;
            count1--;
        }
        else{
            temp->data = 2;
            count2--;
        }
        temp = temp->next;
    }
    return head;
}

Node* reverseLinkedList(Node* &head , int k)
{
    /*
    Node *prev = NULL;
    Node *curr = head;
    reverse(head,curr,prev);
    return head;
    */

    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }

    if(forward)
    {
        curr->next = reverseLinkedList(forward,k);
    }
    return prev;

}

// slow-fast method

Node* getMiddle(Node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    if(head->next->next == NULL)
    {
        return head->next->next;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast -> next)
    {
        fast = fast->next;
        while (fast)
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
