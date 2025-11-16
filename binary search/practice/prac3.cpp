#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n ,int key)
{
    int s=0;
    int e = n-1;
    
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(key == arr[mid])
            return mid;
        
        if(key < arr[mid])
            e = mid-1;
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int firstOccur(int arr[] , int n ,int key)
{
    int s=0;
    int e = n-1;
    int ans = -1;
    
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(key == arr[mid])
            ans = mid;
            e = mid-1;
        
        if(key < arr[mid])
            e = mid-1;
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOccur(int arr[] , int n ,int key)
{
    int s=0;
    int e = n-1;
    int ans = -1;
    
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(key == arr[mid])
            ans = mid;
            s = mid+1;
        
        if(key < arr[mid])
            e = mid-1;
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int peakMaximum(int arr[] , int n)
{
    int s=0;
    int e = n-1;
    
    int mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
            s=mid+1;
        else
            e=mid;

        mid = s+(e-s)/2;
    }
    return s;
}

main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenBinary = binarySearch(even,6,12);
    cout << "index is" << evenBinary << " " <<endl;

    int oddBinary = binarySearch(odd,5,11);
    cout << "index is" << oddBinary << " " << endl;

    int arr[9] = {1,2,3,3,3,4,5,6,8};

    cout << "first occurence of 3 is at index " << firstOccur(arr , 9 , 3) << " " << endl;

    cout << "last occurence of 3 is at index " << lastOccur(arr , 9  ,3) << " " << endl;

    cout << "the peak maximum is at index is " << peakMaximum(arr , 9);
}