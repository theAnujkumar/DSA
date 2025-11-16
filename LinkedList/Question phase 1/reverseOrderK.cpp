// Tc = O(k*n) = O(n)
// Sc = O(k/n) = O(n)

Node* kReverse(Node* head, int k) {
    // Write your code here.

    // base case
    if(head == NULL)
    {
        return NULL;
    }

    // step 1 = k node reverse
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int cnt = 0;

    while(curr != NULL && cnt < k)
    {
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
        cnt++;
    }

    // step 2 = recursion dekh lenga
    if(next!=NULL)
    {
        head->next = kReverse(next,k);
    }

    //return head reverse list 
    return prev; 
}