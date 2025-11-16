#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.

    // Step 1: Sort in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    // Step 2: Find the first element smaller than arr[0]
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[0]) {
            return arr[i]; // second largest
        }
    }

    // Step 3: If no such element found, return -1
    return -1;

    // int ans = -1;

    // for(int i=0 ; i<n-1 ; i++)
    // {
    //     int minIndex = i;
    //     for(int j=i+1 ; j<n ; j++)
    //     {
    //         if(arr[minIndex] < arr[j])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     swap(arr[minIndex],arr[i]);
    // }

    // sort(arr.begin(),arr.end(),greater<int>());         // O(nlogn)

    
    // // if(arr[0] != arr[1])
    // // {
    // //     ans = arr[1];
    // // }
    // // else{
    // //     ans = arr[2];
    // // }

    // return ans;

}