#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums){
    int n = nums.size();
    int s=0;
    int e=n-1;

    while(s<e)
    {
        // if left side already negative number
        if(nums[s] < 0)
        {
            s++;
        }

        // if right side already positive number
        else if(nums[e] >= 0)
        {
            e--;
        }

        // left = +ve and right = -ve
        else{
            swap(nums[s++],nums[e--]);
        }
    }
    return nums;

    // while(s<e)
    // {
    //     if(nums[s] > 0 && nums[e] > 0)
    //     {
    //         e--;
    //     }
    //     else if(nums[s] < 0 && nums[e] < 0)
    //     {
    //         s++;
    //     }
    //     // if(nums[s] >= 0 && nums[e] <= 0)
    //     else if(nums[s] > 0 && nums[e] < 0)
    //     {
    //         swap(nums[s],nums[e]);
    //         s++;
    //         e--;
    //     }
    //     else{
    //         s++;
    //         e--;
    //     }
    // }
    // return nums;

}

int main()
{
    vector <int> nums = {1,-4,-2,5,3};
    vector<int> ans = separateNegativeAndPositive(nums);
    for(auto i : ans)
    {
        cout << i << " ";
    }
}

// tc = O(N)
// SC = O(1)


/*
while(s<e)
    {
        if(nums[s] > 0 && nums[e] > 0)
        {
            e--;
        }
        else{
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }
    return nums;
*/