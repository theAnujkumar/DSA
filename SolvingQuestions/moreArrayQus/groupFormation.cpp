// group formation with minimum efficiency difference

// array represent efficiency of each person
// each group of size t members
// group should be formed such that difference within group is minimized

// among all group find maximun difference between:
// lowest efficiency
// highest efficiency

#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int groupFormation(vector<int> &arr , int n , int t)
{
    //sort(arr.begin(),arr.end(),greater<int>());         // O(nlogn)  in vector
    sort(arr.begin(),arr.end());

    int maxDiff = 0;

    // form group of t size
    // first element = i,
    // last element = i+t-1
    for(int i=0 ; i+t-1 < n ; i+= t)
    {
        int diff = arr[i+t-1] - arr[i];
        maxDiff = max(maxDiff,diff);
    }
    /*
    int left = 0;
    int right = t - 1;

    while(right < n)
    {
        maxDiff = max(maxDiff, arr[right] - arr[left]);

        left += t;
        right += t;
    }
    */

    return maxDiff;
}

int main()
{
    vector<int> arr1 = {1,6,9,5,2,12,13};
    vector<int> arr2 = {1,5,9,12,13,20,25};
    int n = arr1.size();
    int n1 = arr2.size();
    int t = 3;

    for(auto i:arr1)
    {
        cout << i << " " ;
    }
    cout << endl;

    int ans = groupFormation(arr1,n,t);
    int ans2 = groupFormation(arr2,n1,t);
    cout << "ans is " << ans << endl ;
    cout << "ans2 is " << ans2 << endl ;

    return 0;
}

/*
Isko yaad rakhne ka shortcut

Agar group size = t

Aur group ka start = i

To:

First element = i
Last element  = i + t - 1

Ye formula har jagah use hota hai.
*/