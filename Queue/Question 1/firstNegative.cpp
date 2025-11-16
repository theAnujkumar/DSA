#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;

    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        int n=arr.size();
        
        // process first window of k element
        for(int i=0 ; i<k ; i++)
        {
            if(arr[i] < 0)
            {
                dq.push_back(i);
            }
        }
        
        // store answer
        if(dq.size() > 0)
        {
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        // now process next window
        for(int i=k ; i<n ; i++)
        {
            // delete prev element
            if(!dq.empty() && i-dq.front() >= k)
            {
                dq.pop_front();
            }
            // addition
            if(arr[i]<0)
            {
                dq.push_back(i);
            }
            
            if(dq.size() > 0)
            {
                ans.push_back(arr[dq.front()]);
            }
            
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
/*
Deque (double-ended queue) ye dono kaam efficient banata hai:

push_back() → naye negative index add karne ke liye

pop_front() → purane (window ke bahar) index remove karne ke liye
*/