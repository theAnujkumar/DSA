// Tc = O(n/2) = O(n)
// Sc = O(1)

//Following is the class structure of the Node class:

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

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
        Node(int data , Node* next)
        {
            this->data = data;
            this->next = next;
        }
};

void insertAtTail(Node* &tail , int d)
{
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
    //tail = temp;
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node *getMiddle(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    if(head->next->next == NULL)
    {
        return head->next;
    }

    // Node* slow = head;
    // Node* fast = head->next;

    // while(fast!=NULL)
    // {
    //     fast = fast->next;
    //     if(fast!=NULL)
    //     {
    //         fast = fast->next;
    //     }
    //     slow = slow->next;
    // }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node *findMiddle(Node *head) {
    // Write your code here

    Node* ans = getMiddle(head);
    return ans;
}

int main()
{
    Node* node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    //insertAtHead(head , 12);
    insertAtTail(tail,12);

    insertAtTail(tail,15);
    insertAtTail(tail,17);

    print(head);

    //cout << "ans is " << head << endl;
    Node* ans = findMiddle(head);
    cout << "ans is " << ans->data << endl;
    print(ans);

    return 0;
}

