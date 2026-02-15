#include<iostream>
#include<unordered_set>
#include<unordered_map>
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

/*
Node * removeDuplicates(Node *head)
{
    // empty list
    if(head == NULL)
    {
        return NULL;
    }

    // non-empty list

    Node* curr = head;
    
    while(curr != NULL)
    {
        Node* temp = curr -> next;
        Node* prev = temp;

        while(temp != NULL)
        {
            if(curr -> data == temp -> data)
            {
               Node* next_next = temp->next;
               delete(temp);
               prev -> next = next_next;
               temp = next_next;

            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

*/

//              from unsorted linked list
// Node *removeDup(Node * &head)
// {
//     if(head == NULL)
//     {
//         return NULL;
//     }

//     Node* curr = head;
//     while(curr != NULL)
//     {
//         Node *temp = curr->next;
//         while(temp != NULL)
//         {
//             if(curr->data == temp->data)
//             {
//                 //temp = temp->next->next;
//                 curr = temp->next;
//             }
//             else{
//                 temp = temp->next;
//             }
//         }
//     curr = curr->next;
//     }
//     return head;
// }

Node *removeDup(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* curr = head;
    while(curr != NULL)
    {
        Node *temp = curr;
        // not use temp = curr->next
        while(temp && temp->next)
        {
            if(temp->data == temp->next->data)
            {
                //temp = temp->next->next;
                temp->next = temp->next->next;
                //delete(temp->next);
            }
            else{
                temp = temp->next;
            }
        }
    curr = curr->next;
    }
    return head;
}


Node* removeDupFromUnsorted(Node* head)
{
    Node* curr = head;
    while(curr != NULL)
    {

        Node* prev = curr;
        Node* temp = curr->next;
        while(temp != NULL)
        {
            if(curr->data == temp->data)
            {
                prev->next = temp->next;
                temp->next = NULL;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

Node *removeDuplicates(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* next = curr->next;

    unordered_map<int,bool> visited;

    while(curr!=NULL)
    {
        if(!visited[curr->data])
        {
            visited[curr->data] = true;
            prev = curr;
            curr = next;
        }

        else{
            prev -> next = curr -> next;
            delete curr;
        }
        //curr = curr->next;   not because it will skip the some element
        curr = prev -> next;
    }
    return head;
}

int main()
{
    Node *node1 = new Node(10);

    // head point to node1
    Node *head = node1;
    Node *tail = node1;
    //print(head);

    // for sorted
    //insertAtTail(tail,22);

    // for unsorted
    insertAtTail(tail,12);
    //print(head);

    insertAtTail(tail,15);
    //print(head);

    insertAtPosition(head,tail,3,22);
    //print(head);

    //tail->next = head->next;
    print(head);

    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;

    removeDuplicates(head);

    print(head);

    return 0;
}
/*
    unordered_map<int,bool> visited;

    Node* temp = head;

    Node* prev = NULL;

    while(temp!=NULL){

        if(visited[temp->data]){

 

            

            Node* next_next = temp->next;

            delete(temp);

            prev->next = next_next;

            temp = next_next;

        }

        else{

            visited[temp->data] = true;

            prev = temp;

            temp = prev->next;

        }

           

    }

    return head;
*/