#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
using namespace std;

bool pairSum(vector<int> &arr , int k)
{
    int n = arr.size();
    int left = 0;
    int right = n-1;

    while(left < right)
    {
        if(arr[left]+arr[right] == k)
        {
            cout << arr[left] << " " << arr[right] << endl;
            return true;
        }
        if(arr[left]+arr[right] < k)
        {
            left++;
        }
        else{
            right--;
        }
    }
    return false;
}
// in this print pairsum exist or not

vector<int> twoSum(vector<int> &arr , int k)
{
    unordered_map<int,int> mp;
    for(int i=0 ; i<arr.size() ; i++)
    {
        int needed = k-arr[i];
        //if(mp[needed] != 0)
        // it means needed present already in map so return ans
        if(mp.find(needed) != mp.end())
        {
            return {mp[needed],i};
            //return {mp[needed],arr[i]};
        }
        mp[arr[i]] = i;
    }
    return {};
}
// in this print index of output result

int main()
{
    // for input from user
    // vector<int> arr;
    // int n ;
    // cin >> n;

    // for(int i=0 ; i<n ; i++)
    // {
    //     cin >> arr[i];
    // }
    // int k;
    // cin >> k;

    //vector<int> arr = {5,9,12,23,31};
    vector<int> arr = {2,7,11,15};
    int n = arr.size();
    int k = 13;

    bool ans = pairSum(arr,k);
    if(ans)
    {
        cout << "yes pair exist " << endl;
    }
    else{
        cout << "no pair exist " << endl;
    }

    vector<int> result = twoSum(arr,k);
    cout << "result is at index " << result[0] << " " << result[1] << endl;

    // unordered_set<int> seen;
    // for(int i=0 ; i<n ; i++)
    // {
    //     int diff = k-arr[i];
    //     if(seen.count(diff))
    //     {
    //         cout << diff << " " << arr[i] << endl;
    //         break;
    //     }
    //     seen.insert(arr[i]);
    // }
    // else{
    //     cout << "no pair found " << endl;
    // }
    return 0;

}