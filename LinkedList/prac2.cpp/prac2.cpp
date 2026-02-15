#include<iostream>
using namespace std;
class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
node* getMid(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    if(head->next->next == NULL)
    {
        return head->next->next;
    }

    node* slow = head;
    node* fast = head->next;

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

node* merge(node* left,node* right)
{
    node* ans = new node(-1);
    node* temp = ans;

    if(left == NULL)
    {
        return right;
    }
    if(right == NULL)
    {
        return left;
    }

    while (left && right)
    {
        if(left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
    
}

node* mergeSort(node *head) {
    // base case
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    // divide into 2 halves
    node* left = head;
    node* mid = getMid(head);
    node* right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    merge(left,right);
    
}

// tc = O(nlogn)
// sc = O(logn)
