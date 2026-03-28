#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1 ; i>=0 ; i--)
    {
        int curr = arr[i];
        while(curr > s.top())
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
}