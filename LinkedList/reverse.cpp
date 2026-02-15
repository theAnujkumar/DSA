// Tc = O(n)
// Sc = O(n)
/*

Node* reverse(Node* &head, Node* &curr, Node* &prev)
{
    // base case
    if(curr==NULL)
    {
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}

// Each recursive call goes one level deeper into the call stack until curr == NULL.


Node* reverseLinkedList(Node* head)
{
    /*
    Node *prev = NULL;
    Node *curr = head;
    reverse(head,curr,prev);
    return head;
    */

/*
    if(head==NULL || head->next == NULL)
    {
        return head;
    }

    else{
        LinkedListNode *prev = NULL;
        LinkedListNode *curr = head;
        LinkedListNode *forward = NULL;

        while(curr!=NULL)
        {
            forward = curr->next;   // forward curr ke next me jayenga
            curr->next = prev;      // curr ka next prev me ayenga
            prev = curr;            // prev curr me jayenga
            curr = forward;
        }
    }
    return prev;
}

*/