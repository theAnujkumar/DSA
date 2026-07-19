#include <bits/stdc++.h> 
#include<string>
#include<iostream>
#include<stack>
#include<vector>
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

        int area = INT_MIN;
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

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())
            return 0;

        int row = matrix.size();
        int col = matrix[0].size();

        // Histogram heights
        vector<int> heights(col, 0);

        int maxArea = 0;

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                // Har row ko histogram samjho. so height increase 
                if(matrix[i][j] == '1')
                    heights[j]++;
                else
                    heights[j] = 0;
            }

            // Har histogram par Largest Rectangle in Histogram wala function call hota hai.
            maxArea = max(maxArea, largestRectangleArea(heights));
        }

        return maxArea;
    }
};

/*
Time Complexity
largestRectangleArea() = O(col)
Har row ke liye ek baar call hoti hai.

Total:

O(row×col)
Space Complexity
heights = O(col)
prev = O(col)
next = O(col)
stack = O(col)

Total:

O(col)
*/