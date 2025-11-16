#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        // step 1 :- pop first k element and push into stack
        // ex = 1,2,3,4,5
        
        stack<int> s;
        for(int i=0 ; i<k ; i++)
        {
            int value = q.front();
            q.pop();
            s.push(value);
        }
        
        // step 2 : fetch from stack and push into queue
        while(!s.empty())
        {
            int val = s.top();
            s.pop();
            q.push(val);
        }
        // reverse element piche ki taraf ayee hai
        // ex  = 4,5,3,2,1   but we want = 3,2,1,4,5
        
        // step 3 : fetch first (n-k) element from queue and push back 
        int t = q.size()-k;
        while(t--)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }

        return q;
        
    }
    
    // Sc = O(K) = O(n)  k size tak
    // Tc = O(k)+O(k)+O(n-k) = O(n)

    /*
    queue<int> reverseFirstK(queue<int> q, int k) {
        
        int n = q.size();
        
         if (k <= 0 || k > n) {
            // agar k invalid hai to original queue return kar do
            return q;
        }
        
        stack<int> s;
        int i=0;
        
        while(i<k)
        {
            s.push(q.front());
            q.pop();
            i++;
        }
        
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        
        i = 0;
        while(i<n-k)
        {
            q.push(q.front());
            q.pop();
            i++;
        }
        return q;
    }*/
};