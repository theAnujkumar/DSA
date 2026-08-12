#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    // vector<int> arr1;
    // int n1 ;
    // cout << "enter no. of elements in array 1 " << endl;
    // cin >> n1;

    // cout << "enter product id " << endl;
    // for(int i=0 ; i<n1 ; i++)
    // {
    //     cin >> arr1[i];
    // }

    // vector<int> arr2;
    // int n2 ;
    // cout << "enter no. of elements in array 2 " << endl;
    // cin >> n2;

    // cout << "enter product id " << endl;
    // for(int i=0 ; i<n2 ; i++)
    // {
    //     cin >> arr2[i];
    // }

    //vector<int> arr = {5,9,12,23,31};
    vector<int> arr1 = {5,9,12,23};
    int n1 = arr1.size();

    for(auto i:arr1)
    {
        cout << i << " " ;
    }
    cout << endl;

    vector<int> arr2 = {8,21,25,27};
    int k = 30;
    int n2 = arr2.size();

    for(auto i:arr2)
    {
        cout << i << " " ;
    }
    cout << endl;

    int left = 0 , right = n2-1;
    int ele1 = -1 , ele2 = -1;
    int possibleAns = INT8_MAX;

    while(left<n1 && right>=0)
    {
        int sum = arr1[left]+arr2[right];
        if(abs(sum-k) < possibleAns)
        {
            // store small possible ans
            possibleAns = abs(sum-k);
            ele1 = arr1[left];
            ele2 = arr2[right];
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