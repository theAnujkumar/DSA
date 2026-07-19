#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

class Solution {
    private:
    vector<int>nextSmallerElement (vector<int>& heights,int n)
    {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1 ; i>=0 ; i--)
    {
        int curr = heights[i];
        while(s.top() != -1 && heights[s.top()] >= curr)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
        }

    vector<int>prevSmallerElement (vector<int>& heights,int n)
    {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0 ; i<n ; i++)
    {
        int curr = heights[i];
        while(s.top() != -1 && heights[s.top()] >= curr)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
        }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElement(heights,n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights,n);

        int area = INT16_MIN;
        for(int i=0 ; i<n ; i++)
        {
            int l = heights[i];

            // if all elements are same like 2,2,2,2
            if(next[i] == -1)
            {
                next[i] = n;
            }
            int b = next[i] - prev[i] -1;

            int newArea = l*b;
            area = max(area,newArea);

        }
        return area;
    }
};

// extend till get smaller element
//      O(n) both

/*
Example 1
Heights = [2, 2, 2]

Index:

0 1 2

Previous smaller:

-1 -1 -1

Next smaller:

-1 -1 -1

Ab pehle element ke liye:

Agar next = -1

width = -1 - (-1) - 1 = -1 ❌

Galat.

Lekin

next = n = 3;

to

width = 3 - (-1) - 1
      = 3

Area

2 × 3 = 6

Bilkul sahi.
*/