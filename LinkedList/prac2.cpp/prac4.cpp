#include<iostream>
using namespace std;
#include<unordered_map>

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

Node* floydDetectionLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow && fast)
    {
        fast = fast->next;
        if(fast)
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
        slow = slow->next;
        intersection = intersection->next;
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
    Node* temp = startingNode;

    while(temp->next != startingNode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

// from sorted list
Node* removeDuplicates(Node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* curr = head;
    while(curr!=NULL && curr->next)
    {
        if(curr->data == curr->next->data)
        {
            Node* next_to_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_to_next;
            //curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
    }
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

    while(curr)
    {
        if(!visited[curr->data])
        {
            visited[curr->data] = true;
            prev = curr;
            curr = next;
        }
        else{
            prev->next = curr->next;
            delete curr;
        }
        curr = prev->next;
    }
    return head;
}