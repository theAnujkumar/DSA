#include<iostream>
#include<vector>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
    
    private:
        bool checkPalindrome(vector<int>arr)
        {
            int n = arr.size();
            int s = 0;
            int e = n-1;
            
            while(s<e)
            {
                if(arr[s] != arr[e])
                {
                    return 0;
                }
                s++;
                e--;
            }
            return 1;
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
        
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        
        vector<int> arr;
        Node* temp = head;
        
        while(temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPalindrome(arr);
    }

    bool ispalindrome(Node *head) 
    {
        if(head->next == NULL)
        {
            return true;
        }

        Node* middle = getMid(head);
        Node* temp = middle->next;
        middle->next = reverse(head);

        Node* head1 = head;
        Node* head2 = middle->next;

        while(head2 !=NULL)
        {
            if(head1->data != head2->data)
            {
                return false;
            }
        }

        temp = middle->next;
        middle->next = reverse(head);
        return true;
    }
};

// TC and sc = O(n)