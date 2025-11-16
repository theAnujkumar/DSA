#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

queue<int> reverse (queue<int> q)
{
    stack<int> st;

    while(!q.empty())
    {
        int num = q.front();
        q.pop();
        st.push(num);
    }
    while(!st.empty())
    {
        int val = st.top();
        st.pop();
        q.push(val);
    }
    return q;
}

queue<int> reverse2 (queue<int> q)
{
    if(q.empty())
    {
        return;
    }
    int val = q.front();
    q.pop();
    reverse2(q);
    q.push(val);
}

queue<int> modifyQueue(queue<int> q, int k) 
{
    stack<int> st;
    int n=q.size();

    for(int i=0 ; i<k ; i++)
    {
        int val = q.front();
        q.pop();
        st.push(val);
    }
    while (!st.empty())
    {
        int val = st.top();
        st.pop();
        q.push(val);
    }
    while(n-k > 0)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    
}
int tour(petrolPump p[],int n)
{
    int kami = 0;
    int start = 0;
    int balance = 0;

    for (int i = 0; i<n ; i++)
    {
        balance = balance + p[i].petrol - p[i].distance;

        if(balance < 0)
        {
            kami = kami + balance;
            start = i+1;
            balance = 0;
        }
    }
    if(kami + balance >= 0)
    {
        return start;
    }
    else{
        return -1;
    }
}

vector<int> FirstNegativeInteger(vector<int>& arr, int k)
{
    deque<int> q;
    vector<int> ans;
    int n = arr.size();

    for(int i=0 ; i<k ; i++)
    {
        if(arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    if(q.size() > 0)
    {
        ans.push_back(arr[q.front()]);
    }
    else{
        ans.push_back(0);
    }

    for(int i=k ; i<n ; i++)
    {
        if(!q.empty() || q.front() < i-k)
        {
            q.pop_front();
        }
        if(arr[i] < 0)
        {
            q.push_back(i);
        }

        if(q.size() > 0)
        {
        ans.push_back(arr[q.front()]);
        }
        else{
        ans.push_back(0);
        }
    }
    return ans;
}