#include <bits/stdc++.h> 
#include<string>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        //st.push(-1);

        // find next largest temp
        for(int i=n-1 ; i>=0 ; i--)
        {
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i] = 0;
            }
            else{
                ans[i] = st.top()-i;
            }
            //ans.push_back(st.empty() ? -1 : st.top()-i);      not require
            st.push(i);
        }

        return ans;
    }

int main()
{
    vector<int> arr = {10,20,30,40};
    int n = arr.size();
    //vector<int> ans = nextSmallerElement(arr,n);
    
    // for(auto i : ans)
    // {
    //     cout << i << " ";
    // }

    vector<int> ans2 = dailyTemperatures(arr);
    for(auto i : ans2)
    {
        cout << i << " ";
    }
}