#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

bool isBinarySearch(vector<int> &arr , int n , int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    cout << "mid is " << mid << endl;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            cout << "index is " << mid << endl;
            return true;
        }
        else if(arr[mid] < key)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

// return index of element
int BinarySearch(vector<int> &arr , int n , int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    cout << "mid is " << mid << endl;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            cout << "index is " << mid << endl;
            return mid;
        }
        else if(arr[mid] < key)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {1,3,5,6,8,9};
    int n1 = arr1.size();
    int key = 8;
    // bool ans = isBinarySearch(arr1,n1,key);
    // cout << "ans is " << ans << endl;

    // if(ans)
    // {
    //     cout << "element is present " << endl;
    // }
    // else
    // {
    //     cout << "element is not present " << endl;
    // }

    cout << "element present at index " << BinarySearch(arr1,n1,key) << endl;

    int arr[9] = {1,2,3,3,3,4,5,6,8};

    //cout << "last occurence of 3 is at index " << endl;
    return 0;
}