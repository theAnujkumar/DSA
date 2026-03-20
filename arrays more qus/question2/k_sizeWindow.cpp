#include<iostream>
using namespace std;

// Find maximum sum of subarray of size 3

int main()
{
    int arr[] = {2,1,5,1,3,2};
    int n = 6;
    int k = 3;

    // int n = arr.size();
    // base case
        if(k > n)
            return 0;

        int windowSum = 0;
        for(int i=0 ; i<k ; i++)
        {
            windowSum += arr[i];
        }
        int maxSum = windowSum;

        for(int i=k ; i<n ; i++)
        {
            windowSum = windowSum + arr[i] - arr[i-k];
            maxSum = max(maxSum,windowSum);
        }

        cout << maxSum;
}

// tc = O(n)
// sc = O(1)