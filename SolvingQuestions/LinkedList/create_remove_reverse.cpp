// create linked list from input
// remove duplicates while keep 1st occurence
// reverse linked list
// print final

// input 6
// 1 4 1 3 2 5

// after remove duplicates
// 1 4 3 2 

// reverse 
// 2 3 4 1 
#include<iostream>
#include<unordered_set>
#include<unordered_map>
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
        next = NULL;
    }
    Node(int data,Node* next)
    {
        this->data = data;
        this->next = next;
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

Node* reverseLinkedList(Node* &head)
{
    // if(head == NULL || head->next == NULL)
    // {
    //     return head;
    // }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward ;

    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

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
    Node* head = createLinkedList();

    // cout << "enter the value " << endl;
    // int data;
    // cin >> data;
    // while(data != -1)
    // {
    //     insertAtTail(head,tail,data);
    //     cin >> data;
    // }

    cout << "head data is " << head->data << endl;
    print(head);

    //removeDuplicates(head);

    // cout << "after remove duplicates " << endl;
    // print(head);

    reverseLinkedList(head);
    cout << "after reverse " << endl;
    print(head);

    return 0;
}
