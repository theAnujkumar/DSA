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
    Node(int data , Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

void insertAtTail(Node* &head , Node* &tail , int val)
{
    Node* newData = new Node(val);

    if(head == NULL)
    {
        head = newData;
        tail = newData;
    }
    tail -> next = newData;
    tail = newData;
}

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

Node* createLinkedList()
{
    int n;
    cout << "enter no. of nodes " << endl;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    while(n--)
    {
        int val;
        cout << "enter node value " << endl;
        cin >> val;
        insertAtTail(head,tail,val);
    }
    return head;
}

Node* removeDuplicate(Node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }

    unordered_set<int> mp;
    Node* curr = head;
    Node* prev = NULL;

    while(curr)
    {
        //if(!mp.count(curr->data))
        if(mp.find(curr->data)!=mp.end())
        {
            mp.insert(curr->data);
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

Node* removeDuplicates(Node* &head){
    if(head == NULL)
    {
        return NULL;
    }

    unordered_map<int,bool> visited;
    Node* curr = head;
    Node* prev = NULL;

    while(curr)
    {
        if(!visited[curr->data])
        {
            visited[curr->data] = true;
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
}

int main()
{
    Node* head = createLinkedList();
    // cout << "enter value" << endl;
    // int data;
    // cin >> data;
    // while(data != -1)
    // {
    //     insertAtTail(head,tail,data);
    //     cin >> data;
    // }
}