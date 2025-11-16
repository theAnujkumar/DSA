// it will give head of reverse list
/*
    Sc = O(n*k) = O(n)  // k = constant value and n = no of nodes
    Tc = O(n)
*/
Node* reverse1(Node* head)
{
    // base case
    if(head==NULL || head->next=NULL)
    {
        return head;
    }

    Node* chotaHead = reverse1(head->next);
    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;
}

Node* reverseLinkedList(Node* head)
{
    reverse1(head);
}