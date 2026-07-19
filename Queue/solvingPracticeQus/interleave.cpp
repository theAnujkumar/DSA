#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;

void interLeaveQueue(queue < int > & q) {
    int n = q.size();
    int halfSize = n/2;
    // if odd length
    //int halfSize = n/2 - 1;
    queue<int> newQueue;

    // insert first half of original q into new q
    for(int i=0 ; i<halfSize ; i++)
    {
        int element = q.front();
        newQueue.push(element);
        q.pop();
    }

    // insert all element into q in series order
    while(!newQueue.empty())
    {
        int val = newQueue.front();
        q.push(val);
        newQueue.pop();

        int element = q.front();
        q.push(element);
        q.pop();
    }
}


// 2nd approach

/*
void interLeaveQueue(queue < int > & q) {
    stack<int> st;
    int n = q.size();
    int halfSize = n/2;

    // insert first half of original q into stack
    for(int i=0 ; i<halfSize ; i++)
    {
        int element = q.front();
        st.push(element);
        q.pop();
    }

    // insert stack into orignal q
    while(!st.empty())
    {
        int element = st.top();
        q.push(element);
        st.pop();
    }

    // insert first half of original q into same original q
    for(int i=0 ; i<halfSize ; i++)
    {
        int element = q.front();
        q.push(element);
        q.pop();
    }

    // insert first half into stack
    for(int i=0 ; i<halfSize ; i++)
    {
        int element = q.front();
        st.push(element);
        q.pop();
    }

    while(!st.empty())
    {
        int element = st.top();
        q.push(element);
        st.pop();

        int val = q.front();
        q.push(val);
        q.pop();
    }
}
*/