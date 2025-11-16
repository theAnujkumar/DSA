#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;

class Solution {
  public:
    string FirstNonRepeating(string &s) {
        
        unordered_map<char,int> count;
        queue<int> q;
        string ans = "";
        
        for(int i=0 ; i<s.length() ; i++)
        {
            char ch = s[i];
            
            count[ch]++;
            
            // push character to queue
            q.push(ch);
            
            while(!q.empty())
            {
                // repeating character
                if(count[q.front()] > 1)
                {
                    q.pop();
                }
                
                else{
                    ans.push_back(q.front());
                    break;
                    // break is used while loop se bahar nikalene ke liye
                }
            }
            
            if(q.empty())
            {
                ans.push_back('#');
            }
        }
        
        return ans;
    } 
};
// tc and sc = O(N)

// input  = aabc
// output  = a#bc in ans

// Stream ke order me first unique character maintain karta hai

// Queue (FIFO → First In, First Out) perfect hota hai "stream ke order me 
//characters track karne" ke liye.