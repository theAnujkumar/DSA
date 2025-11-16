#include<iostream>
using namespace std;
#include<map>

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

void insertAtPosition(Node* &head , Node* &tail , int pos , int d)
{
    // insert at head
    if(pos == 1)
    {
        insertAtHead(head,d);
        return;
    }

    int cnt = 1;
    Node *temp = head;

    while(cnt < pos-1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at tail
    if(temp->next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(Node* &head , int pos)
{
    if(pos == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    else{
        Node* prev = NULL;
        Node* curr = head;

        int cnt=1;
        while(cnt<pos)
        {
            prev = curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
}

bool detectCycle(Node* head)
{
    if(head == NULL)
    {
        return false;
    }

    map <Node* , bool> visited;

    Node* temp = head;
    if(temp != NULL)
    {
        if(visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectionLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    if(slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast)
        {
            return slow;
        }

    }
    return NULL;
}

Node* getStartingNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* intersection = floydDetectionLoop(head);

    if(intersection == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    while(slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeLoop(Node* head)
{
    if(head == NULL)
    {
        return;
    }

    Node* startingNode = getStartingNode(head);
    if(startingNode == NULL)
    {
        return;
    }

    Node* temp = startingNode;
    while(temp->next != startingNode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    Node* Node1 = new Node(5);

    Node* head = Node1;
    Node* tail = Node1;

    print(head);
    
    //insertAtHead(head,3);
    //print(head);


    insertAtTail(tail,7);
    insertAtTail(tail,9);
    print(head);

    insertAtPosition(head,tail,3,6);
    insertAtPosition(head,tail,1,2);
    
    print(head);
}