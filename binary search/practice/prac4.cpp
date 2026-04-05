#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    mid = s + (e-s)/2;
    }
    return -1;
}

int firstOccur(int arr[] , int n , int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    mid = s + (e-s)/2;
    }
    return ans;
}

int peakMaximum(int arr[] , int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
    mid = s + (e-s)/2;
    }
    return mid;
}

int getPivot(int arr[] , int n)
{
    
}

main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int indexEven = binarySearch(even , 6 , 6);
    cout << "the index of 6 is " << indexEven;

    int indexOdd = binarySearch(odd , 5 ,20);
    cout << "the index of 20 is " << indexOdd;

    int arr[5] = {1,2,3,3,5};
    int first = firstOccur(arr , 5 ,3);
    cout << "the index of 3 is " << first;
}