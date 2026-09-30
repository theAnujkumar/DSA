// if bich me daal sakte hai to daal do

//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;



    //Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };


Node<int>* solve(Node<int>* first, Node<int>* second)
{
    // if only 1 element in first
    if(first->next == NULL)
    {
        first->next = second;
    }

    Node<int>* curr1 = first;
    Node<int>* next1 = curr1->next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2->next;

    while(curr1 && curr2)
    {
        if(curr1->data < curr2->data && curr2->data < next1->data)
        {
            next2 = curr2->next;
            curr2->next = next1;
            curr1->next = curr2;

            curr1 = curr2;
            curr2 = next2;

        }
        else{
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL)
            {
                curr1->next = curr2;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
    {
        return second;
    }
    if(second == NULL)
    {
        return first;
    }

    if(first->data < second->data)
    {
        return solve(first,second);
    }
    else{
        return solve(second,first);
    }
}


