#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution
{
    private:
    Node* reverse(Node* &head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* forward = NULL;

        while(curr)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    void insertAtTail(struct Node* &head , struct Node* &tail , int val)
    {
        Node* temp = new Node(val);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
    }
    
    struct Node* addNode(struct Node* first, struct Node* second)
    {
        int carry = 0;

         Node* headPart = NULL;
         Node* tailPart = NULL;

        while(first || second || carry)
        {
            int val1 = first->data;
            int val2 = second->data;

            int sum = val1 + val2 + carry;
            int result = sum%10;

            insertAtTail(headPart,tailPart,result);

            carry = sum/10;
            if(first->next)
            {
                first = first->next;
            }
            if(second->next)
            {
                second = second->next;
            }
        }
        return headPart ;
    }

    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // reverse 1st list
        first = reverse(first);
        second = reverse(second);

        Node* ans = addNode(first,second);

        ans = reverse(ans);
        return ans;

    }
};

// tc = O(max(n,m)) = O(n+m)      and     sc = O(max(n,m))
