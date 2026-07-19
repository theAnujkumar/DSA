#include <bits/stdc++.h> 
#include<string>
#include<iostream>
#include<stack>
using namespace std;

void calculateSpan(int prices[], int n, int spans[]) {
    
    stack<int> st;
    // int index=0;
    // int value = 0;
    // find prevHigh
    for(int i=0 ; i<n ; i++)
    {
        // in stack we push index not value of prices
        //while(!st.empty() && prices[st.top()]<=prices[i] )
        // goes backword until get this condition
        while(!st.empty() && prices[st.top()]<prices[i] )
        {
            st.pop();
        }
        //if(st.size()==0)
        if(st.empty())
        {
            spans[i] = i + 1;
            // value = i+1;
            // spans[index++] = value;
        }
        else{
            spans[i] = i - st.top();
            // value = i-st.top();
            // spans[index++] = value;
        }
        st.push(i);
    }
}

// tc = O(n)
// push and pop = O(n)+O(n) = O(2n)

// sc = O(n)

/*
"Although the while loop is nested inside the for loop, each element is pushed onto the
 stack once and popped at most once. Therefore, the total number of stack operations
  is at most 2n, making the overall time complexity O(n) (amortized analysis)."
*/