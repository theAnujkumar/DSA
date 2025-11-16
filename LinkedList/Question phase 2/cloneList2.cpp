#include<iostream>
#include<unordered_map>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
    private:
        
        void insertAtTail(Node* &head , Node* &tail , int d)
        {
            Node* newNode = new Node(d);
            
            if(newNode == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            
            tail -> next = newNode;
            tail = newNode;
        }
  public:
    Node *copyList(Node *head) {
        
        // step 1 create a node 
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL)
        {
            insertAtTail(cloneHead , cloneTail , temp->data);
            temp = temp->next;
        }
        
        // step 2 add clone node between in original list 
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL)
        {
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
             next = cloneNode -> next;
             cloneNode -> next = originalNode;
             cloneNode = next;
        }
        
        // step 3 random pointer copy
        temp = head;
        
        while(temp != NULL)
        {
            if(temp -> next != NULL)
            {
                temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random; 
                /*
                if(temp -> random != NULL)
                {
                    temp -> next -> random = temp -> random -> next;
                }
                else
                {
                    temp -> next = temp -> random;
                }
                */
            }
            temp = temp -> next -> next;
        }
        
        // step 4 reverse change done in step 2 
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL)
        {
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            
            if(originalNode != NULL)
            {
                cloneNode -> next = originalNode -> next;
            }
            cloneNode = cloneNode -> next;
        }
        
        // return cloneHead
        return cloneHead;
    }
};