#include<iostream>
#include<vector>
using namespace std;

int maxSumArray(vector<int> &arr)
{
    int n = arr.size();
    int maxsum = arr[0];
    int currsum = arr[0];

    for(int i=1 ; i<n ; i++)
    {
        currsum = max(arr[i],arr[i]+currsum);
        maxsum = max(maxsum,currsum);
    }
    return maxsum;
}

int main()
{
    //int arr[] = {2,1,5,1,3,2};
    // int arr[] = {1,2,3,4,5,6};
    // int n = 6;
    // int k = 3;

    // int windowsum = arr[0];
    // int maxsum = arr[0];

    // for(int i=1 ; i<k ; i++)
    // {
    //     windowsum += arr[i];
    // }
    // maxsum = windowsum;

    // for(int i=k ; i<n ; i++)
    // {
    //     windowsum += arr[i] - arr[i-k];
    //     maxsum = max(maxsum,windowsum);
    // }

    // cout << "max sum is " << maxsum ;

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSumArray(arr);
    
}