#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    // constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head , int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail , int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head , Node* &tail , int element , int d)
{
    Node* temp = head;
    while(temp->data != element)
    {
        temp = temp -> next;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}





// void insertAtPosition(Node* &head , Node* &tail , int element , int d)
// {
//     Node *temp = head;

//     while(temp->data != element)
//     {
//         temp = temp->next;
//     }

//     Node* nodeToInsert = new Node(d);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;

// }


void print(Node* &head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* Node1 = new Node(5);

    Node* head = Node1;
    Node* tail = Node1;

    print(head);
    
    //insertAtHead(head,3);
    //print(head);


    insertAtTail(tail,7);
    insertAtTail(tail,9);
    print(head);

    insertAtPosition(head,tail,7,8);
    //insertAtPosition(head,tail,1,2);
    
    print(head);
}