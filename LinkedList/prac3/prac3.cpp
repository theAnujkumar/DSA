#include<iostream>
using namespace std;
class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };

    class Node
    {
    public:
        int data;
        Node *next;
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
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };
    
node* getMid(node* head)
{
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

node* merge(node* left , node* right)
{
    if(left == NULL)
        return right;
    
    if(right == NULL)
        return left;

    node* ans = new node(-1);
    node* temp = ans;

    while(left && right)
    {
        if(left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}

node* mergeSort(node *head) {
    
    // base case
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }

    node* mid = getMid(head);
    node* left = head;
    node* right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    node* result = merge(left,right);
    return result;

}

// tc = O(nlogn)
// sc = O(logn)


Node* removeKthNode(Node* head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* fast = head;
    for(int i=0 ; i<k ; i++)
    {
        fast = fast->next;
    }

    // it means delete first node or head
    if(fast == NULL)
    {
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
        return head;
    }

    Node* slow = head;
    while(fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    Node* temp = slow->next;
    slow->next = temp->next;
    temp->next = NULL;
    delete temp;

    return head;
}

int getLength(Node *head) {
    int len = 0;

    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}

Node* removeKthNode2(Node* head, int k)
{
    int n = getLength(head);

    if(k==n)
    {
        // delete head
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
        return head;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 0;
        int pos = n-k;

        while(cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    return head;
}

Node* pairsSwap(Node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* first = head;
    Node* second = head->next;

    first->next = pairsSwap(second->next);
    second->next = first;

    return second;
}

Node* pairsSwap2(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;

    head = head->next;

    while(curr && curr->next)
    {
        Node* first = curr;
        Node* second = curr->next; 
        Node* nextPair = second->next;

        first->next = nextPair;
        second->next = first;

        if(prev!=NULL)
        {
            prev->next = second;
        }
        prev = first;
        curr = nextPair;
    }
}