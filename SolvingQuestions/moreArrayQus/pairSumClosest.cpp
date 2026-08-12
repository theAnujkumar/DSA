#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    // vector<int> arr;
    // int n ;
    // cout << "enter no. of elements in array represent product id " << endl;
    // cin >> n;

    // cout << "enter product id " << endl;
    // for(int i=0 ; i<n ; i++)
    // {
    //     cin >> arr[i];
    // }

    //vector<int> arr = {5,9,12,23,31};
    vector<int> arr = {5,9,12,23,31};
    int k = 20;
    int n = arr.size();

    for(auto i:arr)
    {
        cout << i << " " ;
    }
    cout << endl;

    int left = 0 , right = n-1;
    int ele1 = -1 , ele2 = -1;
    int possibleAns = INT8_MAX;

    while(left < right)
    {
        int sum = arr[left]+arr[right];
        if(abs(sum-k) < possibleAns)
        {
            // store small possible ans
            possibleAns = abs(sum-k);
            ele1 = arr[left];
            ele2 = arr[right];
        }

        if(sum > k)
            right--;
        else
            left++;

    }

    cout << "element 1 is " << ele1 << " " << "element 2 is " << ele2 << endl;
    // int ans = findPairClosestSum(arr1,n,k);
    // cout << "ans is " << ans << endl;

    return 0;
}