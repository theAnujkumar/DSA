#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int>& arr, int n, int key)
{
    int s = 0;
    int e = n-1;
    // int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] == key)
        {
            ans = mid ;
            // place to left because it may be least
            e = mid - 1;
        }

        else if(arr[mid] < key)
        {
            // go to right side
            s = mid + 1;
        }
        else
        {
            // go to left side
            e = mid - 1;
        }

        // mid = s + (e-s)/2; 
    }
    return ans;
}

int lastOccur(vector<int>& arr, int n, int key)
{
    int s = 0;
    int e = n-1;
    //int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] == key)
        {
            ans = mid ;
            // place to right
            s = mid + 1;
        }

        else if(arr[mid] < key)
        {
            // go to right side
            s = mid + 1;
        }
        else
        {
            // go to left side
            e = mid - 1;
        }

        //mid = s + (e-s)/2; 
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOccur(arr,n,k);
    p.second = lastOccur(arr,n,k);

    return p;
}

// tc = O(logn)
// sc = O(1)