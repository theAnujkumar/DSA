#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        
        while(!q.empty())
        {
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty())
        {
            int element = s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
};
// tc and sc = O(N)
