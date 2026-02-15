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
        bool checkPalindrome(vector<int> &ans)
        {
          int n = ans.size();
          int s = 0;
          int e = n-1;

          while(s<e)
          {
            if(ans[s++] != ans[e--])
            {
              return false;
            }
          }
          return true;
        }
        
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        
        vector<int> ans;
        Node* temp = head;

        while(temp)
        {
            ans.push_back(temp->data);
            temp = temp->next;
        }

        return checkPalindrome(ans);
    }
};

// TC and sc = O(n)