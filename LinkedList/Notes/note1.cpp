/*
    take care where use curr & curr->next
    slow , fast pointer usage
    how to move pointer
    for find middle -> (cnt < ans)  and cnt = 0
    for delete  int cnt = 1;
                 while(cnt < position)
    for insertAtPosition     int cnt = 1;
                             while(cnt < position-1)
*/

/*
Super Important Patterns (Yaad rakhna)
🔹 Pattern 1: Two Pointer
        Cycle detection
        Middle
        Nth from end

🔹 Pattern 2: Dummy Node

        Merge list
        Remove node

🔹 Pattern 3: Reverse Logic
        Palindrome
        K-group reverse
        
*/

/*
        // step 2 = recursion dekh lenga
    if(next!=NULL)
    {
        head->next = kReverse(next,k);
    }
        focous on such cases

        // get mid 
        Node* middle = getMid(head);
        
        //  reverse list after middle
        Node* temp = middle->next;
        middle->next = reverse(temp);
*/