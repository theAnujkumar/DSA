#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pairSum(vector<int> &arr, int n, int target)
{
    sort(arr.begin(),arr.end());
    
    int cnt = 0;
    int s = 0;
    int e = n-1;

    while(s<e)
    {
        int sum = arr[s] + arr[e];
        if(sum == target)
        {
            cnt++;
            s++;
            e--;
        }
        else if(sum < target)
        {
            s++;
        }
        else{
            e--;
        }
    }
    return (cnt == 0) ? -1 : cnt;
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

main()
{
    //int arr1[5] = {1,2,3,4,5};
    vector <int> arr1 = {1,2,3,4,5,6};
    //vector <int> arr1 = {1,3,5,6};
    int n = arr1.size();
    int target = 7;

    int ans = pairSum(arr1,n,target);
    cout << "ans is " << ans << endl;
}