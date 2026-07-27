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
        this->next = NULL;
    }
    Node(int data , Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

// void insertAtTail(Node* &head ,Node* &tail, int data)
// {
//     if(head == NULL)
//     {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//     }
//     // if(tail == NULL || tail->data == -1)
//     // {
//     //     Node* newNode = new Node(data);
//     //     head = newNode;
//     //     tail = newNode;
//     //     //tail = tail->next;
//     // }
//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     tail = newNode;
// }

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
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* removeDuplicate(Node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }

    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = NULL;
    //Node* next = NULL;

    while(curr)
    {
        //unordered_map<int,bool> visited;
        //            OR
        // it means it came first time
        if(!seen.count(curr->data))
        {
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
        else{
            prev->next = curr->next;
            Node* del = curr;
            curr = curr->next;
            delete del;
        }
        curr = prev->next;
    }
    return head;
}

Node* removeDuplicates(Node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }
    unordered_map<int,bool> visited;
    Node* curr = head;
    Node* prev = NULL;
    //Node* next = curr->next;

    while(curr)
    {
        if(!visited[curr->data])
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
            //curr = next;
        }
        else{
            prev->next = curr->next;
            Node* del = curr;
            curr = curr->next;
            delete del;
        }
        curr = prev->next;
    }
    return head;
}

int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,4);
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,1);
    insertAtTail(tail,5);
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

    removeDuplicates(head);

    cout << "after remove duplicates " << endl;
    print(head);
}
