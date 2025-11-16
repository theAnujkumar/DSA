#include<iostream>
using namespace std;

// Find maximum sum of subarray of size 3

int main()
{
    int arr[] = {2,1,5,1,3,2};
    int n = 6;
    int k = 3;

    int windowSum = 0;
    int maxsum = 0;

    for(int i=1 ; i<k ; i++)
    {
        windowSum += arr[i];
    }
    maxsum = windowSum;

    for(int i=k ; i<n ; i++)
    {
        windowSum += arr[i] - arr[i-k];
        maxsum = max(maxsum,windowSum);
    }

    cout << maxsum;
}

// tc = O(n)
// sc = O(1)