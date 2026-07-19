#include <bits/stdc++.h> 
#include<string>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int l = 0 , r = n-1;
         // use two pointers
        int lmax = 0 , rmax = 0;

        while(l<r)
        {
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);

            if(lmax < rmax)
            {
                // find water trap for each height
                ans+= lmax - height[l];
                l++;
            }
            else{
                ans+= rmax - height[r];
                r--;
            }
        }
        return ans;
    }
};

// tc = O(n)
// sc = O(1)