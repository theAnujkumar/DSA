#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d)
    {
        this -> data = d;
        this->prev=NULL;
        this->next=NULL;
    }

    // destructor
    ~Node()
    {
        int val = this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free" << val << endl;
    }
};

void insertAtHead(Node* &head ,Node* &tail , int d)
{
    // empty list
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
         Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head ,Node* &tail , int d)
{
    // empty list
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        temp = tail;
    }
}

void print(Node* &head)
    {
        Node* temp = head;

        while(temp!=NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

int getLength(Node* head)
{
    int len=0;
    Node* temp = head;

    while(temp!=NULL)
        {
            len++;
            temp = temp -> next;
        }
        return len;
}

void insertAtPosition(Node* &head , Node* &tail , int position , int d)
{
    // insert at head/start
    if(position==1)
    {
        insertAtHead(head,tail,d);
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
        insertAtTail(head,tail,d);
        return;
    }

    // create a node at d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert = temp;
    //nodeToInsert -> next = temp;

}

void deleteNode(int position , Node* &head)
{
    // delete head/first node
    if(position == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;        // head ko temp ke next me lie karvana
        temp -> next = NULL;
        delete temp;
    }

    // delete mid or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}



int main()
{
    Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    //Node* head = node1;
    //Node* tail = node1;

    print(head);
    cout << "length is " << getLength(head) << endl;

    insertAtHead(head,tail,15);
    print(head);
    cout << "length is " << getLength(head) << endl;

    insertAtHead(head,tail,18);
    print(head);
    cout << "length is " << getLength(head) << endl;

    insertAtTail(head,tail,5);
    print(tail);
    cout << "length is " << getLength(tail) << endl;
    cout << "head is " << head->data << endl;
    cout << "tail is " <<tail->data << endl;

    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,3,50);
    print(head);

    deleteNode(2,head);
    print(head);
    cout << "head is " << head->data << endl;
    cout << "tail is " <<tail->data << endl;

}
