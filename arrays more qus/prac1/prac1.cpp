#include<iostream>
using namespace std;

// Find maximum sum of subarray of size 3

int main()
{
    int arr[] = {2,1,5,1,3,2};
    int n = 6;
    //int k = 3;

    // int windowSum = 0;
    // int maxSum = 0;

    
    int currSum = arr[0];
    int maxSum = arr[0];

    for(int i=1 ; i<n ; i++)
    {
        currSum = max(currSum,currSum+arr[i]);
        maxSum = max(maxSum,currSum);
    }

    // for(int i=0 ; i<k ; i++)
    // {
    //     windowSum = windowSum+arr[i];
    // }
    // maxSum = windowSum;

    // for(int i=k ; i<n ; i++)
    // {
    //     windowSum = windowSum + arr[i] - arr[i-k];
    //     maxSum = max(maxSum,windowSum);
    // }

     cout << "max sum is " << maxSum;
     cout << "curr sum is " << currSum;
    // cout << "window sum is " << windowSum;
    return maxSum;
}

// tc = O(n)
// sc = O(1)