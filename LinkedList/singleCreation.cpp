#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

};


void insertAtTail(Node* &head , Node* &tail , int x)
{
    Node* newNode = new Node(x);
    // it means no element in linkedlist
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

Node* createLinkedList()
{
    int n;
    cout << "enter no. of nodes " << endl;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    while(n--)
    {
        int x ;
        cout << "enter node value " << endl;
        cin >> x;

        insertAtTail(head,tail,x);
    }
    return head;
}

int main()
{
    Node *node1 = new Node(10);

    Node* head = createLinkedList();

    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

}