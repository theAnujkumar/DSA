#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
#include<unordered_map>
using namespace std;

// int maxSubArray(vector<int> &arr)
// {
//     int n = arr.size();
//     int currSum = arr[0];
//     int maxSum = arr[0];

//     for(int i=0 ; i<n ; i++)
//     {
//         currSum = max(arr[i],currSum+arr[i]);
//         maxSum = max(currSum,maxSum);
//     }
//     return maxSum;
// }

void maxSubArray(vector<int> &arr)
{
    int n = arr.size();
    int start , end , tempStart = 0;
    int currSum = arr[0];
    int maxSum = arr[0];

    for(int i=1 ; i<n ; i++)
    {
        // reset window and update starting position
        if(currSum + arr[i] < arr[i])
        {
            currSum = arr[i];
            tempStart = i;
        }
        // increase window size and add
        else{
            currSum+= arr[i];
        }

        // at time store maxsum store index from start=tempstart to end at i
        if(currSum > maxSum)
        {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }

    cout << "max subarray is " << endl ;
    for(int s=start ; s<=end ; s++)
    {
        cout << arr[s] << " " ;
    }
    cout << "max sum is " << maxSum << endl ;
    //return maxSum;
}

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

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    //cout << maxSubArray(arr);
    maxSubArray(arr);

}