#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
        Node *prev;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertAtHead(Node* &head , Node* &tail , int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        temp = head;
        temp = tail;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head , Node* &tail , int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        temp = head;
        temp = tail;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;


}

// class Node {

//     public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head , int d)
// {
//     Node* temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node* &tail , int d)
// {
//     Node* temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }
// void print(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp=temp->next;
//     }
// }

// void insertAtPosition(Node* &head , Node* &tail , int pos , int d)
// {
//     if(pos == 1)
//     {
//         insertAtHead(head,d);
//     }

//     Node *temp = head;
//     int cnt = 1;

//     while(cnt < pos-1)
//     {
//         temp = temp -> next;
//         cnt++;
//     }

//     if(temp->next == NULL)
//     {
//         insertAtTail(tail,d);
//     }

//     Node* newNode = new Node(d);
//     newNode -> next = temp->next;
//     temp->next = newNode;
// }

// void insertAtPosition2(Node* &head , Node* &tail , int element , int d)
// {
//     Node *temp = head;
//     while(temp->data != element)
//     {
//         temp = temp->next;
//     }

//     Node* newNode = new Node(d);
//     newNode -> next = temp->next;
//     temp->next = newNode;

// }

// void deleteNode(Node * &head , int pos)
// {
//     if(pos == 1)
//     {
//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;

//         delete temp;
//     }
//     else{
//         Node *curr = head;
//         Node *prev = NULL;

//         int cnt = 1;
//         while(cnt < pos)
//         {
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next;
//         curr = curr->next;
//         curr->next = NULL;
//         delete curr;

//     }
// }


// int main() 
// {
//     Node *node1 = new Node(10);
//     return 0;

//     Node *head = node1;
//     Node *tail = node1;

//     print(head);

//     insertAtHead(head , 5);

//     insertAtTail(tail,12);
//     print(head);

//     insertAtTail(tail,15);
//     print(head);

//     insertAtPosition(head,tail,3,22);
//     print(head);
// }