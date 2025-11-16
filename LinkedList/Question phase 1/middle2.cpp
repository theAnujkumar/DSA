/*
    Tc = O(n)+O(n/2) = O(n)
    sc = O(1)
*/
/*
int getLength(Node *head) {
    int len = 0;

    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
// O(n)

Node *findMiddle(Node *head) {
    // Write your code here

    int len = getLength(head);
    int ans = len/2;

    Node* temp = head;
    int cnt = 0;

    while(cnt < ans)
    {
        temp = temp -> next;
        cnt++;
    }

    return temp;

    // O(n/2)  = O(n)

    //getMiddle(head);
}
*/

// two pass method