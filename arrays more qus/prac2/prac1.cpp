#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

int findSecondLargest(vector<int> &arr , int n)
{
    // sort(arr.begin(), arr.end(), greater<int>());

    // for(int i=1 ; i<n ; i++)
    // {
    //     if(arr[0] > arr[i])
    //     {
    //         return arr[i];
    //     }
    // }
    // return -1;

    if(n < 2)
    {
        return -1;
    }

    int largest = INT8_MIN;
    int secondLargest = INT8_MIN;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > largest)
            secondLargest = largest;
            largest = arr[i];
        
        if(arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
}
// ex [5,10,5,8]

int findEquilibriumIndex(vector<int> &arr)
{
    int n = arr.size();
    int leftSum = 0;
    int rightSum = 0;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            leftSum += arr[j];
        }
        for(int j=i+1 ; j<n ; j++)
        {
            rightSum += arr[j];
        }
        if(leftSum == rightSum)
        {
            return i;
        }
    }
    return -1;
}