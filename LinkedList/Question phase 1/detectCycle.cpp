#include<iostream>
#include<map>
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

    if(temp != NULL)
    {
        // cycle present
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