#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;


    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};


void insertAtHead(Node* &head , int d)
{
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

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

void insertAtPosition(Node* &head ,Node* &tail , int position , int d)
{
    // insert at head/start
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt  = 1;

    while(cnt < position-1)
    {
        temp = temp -> next;
        cnt++;
    }

    // insert at tail/end
    if(temp->next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    // create a node at d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

//                      tc = O(n)  ,   sc = (1)

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


int main()
{
    Node *node1 = new Node(10);

    // head point to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    //insertAtHead(head , 12);
    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,3,22);
    print(head);

    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;

    reverseLinkedList(head);
    print(head);

    return 0;
}