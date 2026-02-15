#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

class Node {

    public:
    int data;
    Node *next;

    // construtor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;

        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

void insertNode(Node* &tail , int element , int d) {
        // empty list
        if(tail == NULL)
        {
            Node* newNode = new Node(d);
            tail = newNode;
            newNode -> next = newNode;
        }

        else{
            // non-empty list 
            // assuming element is present in list

            Node* curr = tail;

            if(curr->data != element)
            {
                curr = curr->next;
            }
            // element found
            // curr is representing current vala node
            Node *temp = new Node(d);
            temp->next = curr->next;
            curr->next = temp;

        }
}

void deleteNode(Node* &tail , int value)
{
    // empty list 
    if(tail == NULL)
    {
        cout << "list is empty" << endl;
        return ;
    }

    // non-empty list 
    // assume value is present
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node linked list
        if(curr == prev)
        {
            tail = NULL;
        }

        // 2 or more than 2 node linked list
        else if(tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* tail)
{
    Node* temp = tail;

    if(tail == NULL)
    {
        cout << "list is empty" << endl;
        return ;
    }

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }  while(tail != temp);
    cout << endl;
}

// tc and sc = O(n)
bool detectCycle(Node* head)
{
    if(head == NULL)
    {
        return false;
    }
    map<Node* , bool> visited;

    Node* temp = head;
    while(temp != NULL)
    {
        if(visited[temp] == true)
        {
            cout << "present on element" << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* removeDuplicate(Node* head)
{
    if(head == NULL)
        return NULL;

    Node* curr = head;

    while(curr != NULL)
    {   
        if(curr->next != NULL && curr->data == curr->next->data)
        {
            Node* next_to_next = curr->next->next;
            Node* delnode = curr->next;
            delete(delnode);
            curr->next = next_to_next;
        }
        else{
            curr = curr->next;
        }

    }
    return head;
}

Node* removeDupUnsorted(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    unordered_map<Node*,bool> visited;

    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    while (curr != NULL)
    {
        if(!visited[curr->data])
        {
            visited[curr->data] = true;
            prev = curr;
            curr = next;
        }
        else{
            prev->next = curr->next;
            delete(curr);
        }
    }
    

}

Node* removeDup(Node* head)
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
                temp = temp->next;
                prev = prev->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

int main()
{
    Node* tail = NULL;
    Node* head = NULL;

    // empty list me insert karna
    insertNode(tail,1,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,8);
    print(tail);

    insertNode(tail,8,6);
    print(tail);

    // it will gives cycle
    //tail->next = head->next;

    insertNode(tail,6,4);
    print(tail);

    deleteNode(tail,6);
    print(tail);

    if(detectCycle(head))
    {
        cout << "cycle is present" << endl;
    }
    else{
        cout << "cycle is absent" << endl;
    }
}