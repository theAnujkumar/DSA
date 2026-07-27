// Tc = O(n/2) = O(n)
// Sc = O(1)

//Following is the class structure of the Node class:

#include<iostream>
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

Node *getMiddle(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    if(head->next->next == NULL)
    {
        return head->next;
    }

}

int getLength(Node* &head)
{
    int len = 0;
    Node* temp = head;
    while(temp)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

Node *findMiddle(Node *head) {
    // Write your code here

    int len = getLength(head);
    cout << "length is " << len << endl;
    int result = len/2;
    cout << "result length is " << result << endl;

    int cnt = 0;
    Node* temp = head;
    while(cnt < result)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;

    // Node* ans = getMiddle(head);
    // return ans;
}

int main()
{
    Node* node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    //insertAtHead(head , 12);
    insertAtTail(tail,12);

    insertAtTail(tail,15);
    insertAtTail(tail,17);

    print(head);

    //cout << "ans is " << head << endl;
    Node* ans = findMiddle(head);
    cout << "ans is " << ans->data << endl;
    print(ans);

    return 0;
}

