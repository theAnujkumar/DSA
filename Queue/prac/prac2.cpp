#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class CircularQueue{
    int *arr;
    int size;
    int front;
    int rear; 

    CircularQueue(int n)
    {
        int size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        if((front==0 && rear = size-1) || (front = rear+1))
        {
            return false;
        }
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if((rear = size-1) || (front!=0))
        {
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = value;
    }
};

string FirstNonRepeating(string &s) 
{
    unordered_map<char,int> count;
    string ans;
    queue<char> q;

    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        count[ch]++;
        q.push(ch);

        while(!q.empty())
        {
            if(count[q.front()] > 1)
                q.pop();

            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty())
        {
            ans.push_back('#');
        }
    }
}

