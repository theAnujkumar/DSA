#include<iostream>
using namespace std;
#include<vector>
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

Node* sortList(Node *head){

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp)
    {
        if(temp->data == 0)
        {
            zeroCount++;
        }
        else if(temp->data == 1)
        {
            oneCount++;
        }
    }
    temp = head;
    while(temp)
    {
        if(zeroCount!=0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount!=0)
        {
            temp->data = 1;
            oneCount--;
        }
        temp = temp->next;
    }
}

Node* sortList(Node *head){

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            zeroCount++;
        }
        else if(temp->data == 1)
        {
            oneCount++;
        }
        else if(temp->data == 2)
        {
            twoCount++;
        }

        temp = temp->next;
    }

    temp = head;

    while(temp != NULL)
    {
        if(zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }

        temp = temp->next;
    }
    return head;
}

void insertAtTail(Node* &tail , Node* curr)
{
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head){
    
    // make dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    // create separate list of 0,1,2
    while(curr != NULL)
    {
        int value = curr->data;

        if(value == 0)
        {
            insertAtTail(zeroTail,curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail,curr);
        }
        else if(value == 2)
        {
            insertAtTail(twoTail,curr);
        }

        curr = curr->next;
    }

    // merge three list

    // if list is not empty

    if(oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }

    else
    {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup head 
    head = zeroHead->next;

    // delete dummy nodes
    delete (zeroHead);
    delete(oneHead);
    delete(twoHead);

    return head;
}

Node* sortList1(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* temp = head;
    while(temp)
    {
        int val = temp->data;
        if(val == 0)
            insertAtTail(zeroTail,temp);
        else if(val == 1)
            insertAtTail(oneTail,temp);
        else if(val == 2)
            insertAtTail(twoTail,temp);
        
        temp = temp->next;
    }

    // merge two list
    // if 1 list is not empty
    if(oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
}

bool checkPalindrome(vector<int> &arr)
{
    int n = arr.size();
    int s=0 , e=n-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return false;
        }
        s++,e--;
    }
    return true;
}

bool isPalindrome(Node *head)
{
    vector<int> arr;
    Node* temp = head;
    while(temp)
    {
        int val = temp->data;
        arr.push_back(val);
        temp = temp->next;
    }

    return checkPalindrome(arr);

}

Node* getMid(Node* head)
        {
            Node* slow = head;
            Node* fast = head->next;
            
            while(fast != NULL && fast -> next != NULL)
            {
                fast = fast -> next -> next;
                slow = slow -> next;
            }
            return slow;
        }
    Node* reverse(Node* head)
        {
            Node* curr = head;
            Node* prev = NULL;
            Node* next = NULL;
            
            while(curr != NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
        
bool ispalindrome(Node *head) 
{
    if(head->next == NULL)
        return true;

    Node* middle = getMid(head);
    Node* temp = middle->next;
    middle->next = reverse(temp);
    //Node* reverseHead = reverse(temp);

    Node* head1 = head;
    Node* head2 = middle->next;
    //Node* head2 = reverseHead;

    while(head2)
    {
        if(head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    Node* temp = middle->next;
    middle->next = reverse(temp);
    return 1;

}



// Tc = O(n)+O(n) = O(n)
// Sc = O(1)