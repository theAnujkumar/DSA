#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

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

// tc = O(N)
// sc = o(n)

/*
Agar stack me N elements hain, to sabko pop karke wapas dalna padega.

Matlab ek call ki cost ≈ O(N)

Recursion depth bhi N tak jaa sakti hai → O(N) space
*/