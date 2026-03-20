#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

class Stack
{
    // properties 
    public:
        int *arr;
        int top;
        int size;

    // behavior
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peak()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
            //cout << "stack is empty" << endl;
        }
        else{
            return false;
            //cout << "stack is non-empty" << endl;
        }

    }

};

void solve(stack<int>& s, int x)
{
    // base case 
    if(s.empty())
    {
        s.push(x);
        return ;
    }

    int num = s.top();
    s.pop();

    // recursive call
    solve(s,x);

    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack , x);
    return myStack;
}

// int main()
// {
//     // Stack myStack(5);

//     // myStack.push(1);
//     // myStack.push(2);
//     // myStack.push(3);
//     // myStack.push(4);
//     //myStack.push(5);

//     pushAtBottom(myStack,5);
//     cout << myStack.peak() << endl;

    
//     return 0;
// }

// tc = O(N)
// sc = o(n)

/*
Agar stack me N elements hain, to sabko pop karke wapas dalna padega.

Matlab ek call ki cost ≈ O(N)

Recursion depth bhi N tak jaa sakti hai → O(N) space
*/