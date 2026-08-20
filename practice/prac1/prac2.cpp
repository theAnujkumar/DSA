#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pairSum(vector<int> &arr, int n, int target)
{
    sort(arr.begin() , arr.end());

    int cnt = 0;
    int s = 0 , e = n-1;
    while(s<e)
    {
        int sum = arr[s]+arr[e];
        if(sum == target)
        {
            cnt++;
            s++ , e--;
        }
        else if(sum<target)
        {
            s++;
        }
        else{
            e--;
        }
    }
    return (cnt==0) ? -1 : cnt ;
}

// int pairSum(vector<int> &arr, int n, int target){
// 	int cnt = 0;

//     // int s=0;
//     // int e = n-1;
//     // while(s<e)
//     // {
//     //     if(arr[s]+arr[e] == target)
//     //     {
//     //         cnt++;
//     //     }
//     //     s++ , e--;
//     // }
// 	for(int i=0 ; i<n ; i++)
// 	{
// 		for(int j=i+1 ; j<n ; j++)
// 		{
// 			if(arr[i]+arr[j] == target)
// 			{
// 				cnt++;
// 			}
// 		}
// 	}
// 	if(cnt == 0)
// 	{
// 		return -1;
// 	}
// 	else{
// 		return cnt;
// 	}
// }

int pairSumOptimal(vector<int> &arr, int n, int target)
{
    int cnt = 0;
    unordered_map<int,int> mp;

    for(int i=0 ; i<n ; i++)
    {
        int complement = target - arr[i];

        if(mp.find(complement) != mp.end())
        {
            cnt+= mp[complement];
        }
        mp[arr[i]]++;
    }
    return cnt;
}


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
        }
        mp[arr[i]] = i;
    }
    return {};
}
// in this print index of output result

vector<int> findArraySum(vector<int> &a , int n ,vector<int> &b ,int m)
{
    int i = n-1;
    int j = m-1;

    int carry = 0;
    vector<int> ans;

    while (i>=0 || j>=0 || carry==0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = carry;

        if(i>=0)
        {
            sum+= val1;
            i--;
        }
        if(j>=0)
        {
            sum+= val2;
            j--;
        }

        int digit = sum/10;
        ans.push_back(digit);
        carry = sum%10;
    }
    
}

main()
{
    //int arr1[5] = {1,2,3,4,5};
    vector <int> arr1 = {1,2,3,4,5,6};
    //vector <int> arr1 = {1,3,5,6};
    int n = arr1.size();
    int target = 7;

    int ans = pairSum(arr1,n,target);
    cout << "ans is " << ans << endl;

    vector <int> arr2 = {1,5,7,-1,5};
    //vector <int> arr1 = {1,3,5,6};
    int n2 = arr2.size();
    int target2 = 6;

    int ans1 = pairSumOptimal(arr2,n2,target2);
    cout << "ans is " << ans1 << endl;
}