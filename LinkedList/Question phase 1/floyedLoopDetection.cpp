// Tc = O(n)
// Sc = O(1)
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




Node* floydDetectionLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
        }
        slow=slow->next;

        if(slow==fast)
        // why this necessary   -> because due to decreasing order like 4,3,2,1,0
        {
            cout << "present at slow data" << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}
// tc = O(n)
// sc = O(1)


Node* getStartingNode(Node* head)
{
    if(head==NULL)
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
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    Node* startAtNode = getStartingNode(head);

    if(startAtNode == NULL)
    {
        //return head;
        return ;
    }

    Node* temp = startAtNode;

    while(temp->next != startAtNode)
    {
        temp = temp -> next;
    }
    temp->next = NULL;
}

int main()
{
    Node *node1 = new Node(10);

    // head point to node1
    Node *head = node1;
    Node *tail = node1;
    //print(head);

    //insertAtHead(head , 12);
    insertAtTail(tail,12);
    //print(head);

    insertAtTail(tail,15);
    //print(head);

    insertAtPosition(head,tail,3,22);
    //print(head);

    tail->next = head->next;

    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;

    if(floydDetectionLoop(head) != NULL)
    {
        cout << "cycle is present" << endl;
    }

    else{
        cout << "cycle is absent" << endl;
    }

    Node* loop = getStartingNode(head);
    cout << "starting loop is " << loop->data << endl;

    removeLoop(head);
    print(head);

    return 0;
}