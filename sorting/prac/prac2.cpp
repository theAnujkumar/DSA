#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int ans = -1;

    for(int i=0 ; i<n-1 ; i++)
    {
        int minIndex = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[minIndex] < arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    if(arr[0] != arr[1])
    {
        ans = arr[1];
    }
    else {
        ans = arr[2];
    }

    return ans;
}