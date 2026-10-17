#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;

class Queue {
    int *arr;
    int rear;
    int front;
    int size;

    public:
        Queue() {
            size = 10000;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        bool isEmpty() {
            if(front == rear)
            {
                return 1;
            }
            return 0;
        }

        int front()
        {
            if(front == rear)
            {
                return -1;
            }
            else{
                return arr[front];
            }
        }

        void enqueue(int x){
            if(rear == size-1)
            {
                cout << "overflow";
            }
            // enter 1st element
            if(front == -1)
            {
                front = rear = 0;
                arr[rear] = x;
            }
            else{
                rear++;
                arr[rear] = x;
            }
        }

        void dequeue()
        {
            if(front == -1)
            {
                cout << "underFlow";
            }
            else{
                cout << arr[front];
                front++;

                if(front == rear)
                {
                    front = rear = -1;
                }
            }
        }
};

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // overflow
        if(rear==size-1 && front==0 || (rear == (front-1)%(size-1)))
        {
            return false;
        }
        // first element
        else if(front == -1)
        {
            front = rear = 0;
        }
        // maintain cycle
        else if(rear == size-1 && front!=0)
        {
            rear = 0; 
        }
        else{
            rear++;
        }
        arr[rear] = value;

        return true;
    }

    int dequeue(){
        if(front == -1)
        {
            cout << "underflow";
        }

        int ans = arr[front];
        arr[front] = -1;

        // single element
        if(front == rear)
        {
            front = rear = -1;
        }
        //maintain cycle
        else if(front == size-1)
        {
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

};

queue<int> reverse (queue<int> q)
{
    stack<int> st;

    while(q.empty())
    {
        int val = q.front();
        st.push(val);
        q.pop();
    }
    while(!st.empty())
    {
        int val = st.top();
        q.push(val);
        st.pop();
    }
    return q;
}

queue<int> rev(queue<int> q)
{
    if(q.empty())
    {
        return;
    }
    int val = q.front();
    q.pop();
    rev(q);

    q.push(val);
}

queue<int> modifyQueue(queue<int> q, int k)
{
    int n = q.size();
    stack<int> st;

    for(int i=0 ; i<k ; i++)
    {
        int val = q.front();
        st.push(val);
        q.pop();
    }

    while(!st.empty())
    {
        int val = st.top();
        q.push(val);
        st.pop();
    }

    int i=0;
    while(i<n-k)
    {
        q.push(q.front());
        q.pop();
        i++;
    }
    return q;
}

vector<int> FirstNegativeInteger(vector<int>& arr, int k)
{
    deque<int> dq;
    vector<int> ans;
    int n = arr.size();

    for(int i=0 ; i<k ; i++)
    {
        if(arr[i]<0)
        {
            dq.push_back(i);
        }
    }

    // if dq is empty
    if(dq.empty())
    {
        ans.push_back(0);
    }
    else{
        ans.push_back(arr[dq.front()]);
    }

    for(int i=k ; i<n ; i++)
    {
        if(!dq.empty() && i-dq.front() >= k)
        {
            dq.pop_front();
        }
        if(arr[i]<0)
        {
            dq.push_back(i);
        }

    }
}

string FirstNonRepeating(string &s)
{
    unordered_map<char,int> count;
    string ans = "";
    queue<int> q;
    int n = s.size();

    for(int i=0 ; i<n ; i++)
    {
        char ch = s[i];
        count[ch]++;
        q.push(ch);

        while(!q.empty())
        {
            int val = q.front();
            if(count[val] > 1)
            {
                q.pop();
            }
            else{
                ans.push_back(s[q.front()]);
                break;
            }
        }
        if(q.empty())
            {
                ans.push_back('#');
            }
    }
}

int tour(petrolPump p[],int n)
{
    int start = 0;
    int balance = 0;
    int deficiency = 0;

    for(int i=0 ; i<n ; i++)
    {
        balance += p[i].petrol - p[i].distance;
        if(balance < 0)
        {
            deficiency = deficiency + balance;
            balance = 0;
            start = i+1;
        }
    }
    if(balance+deficiency >= 0)
    {
        return start;
    }
    return -1;
}