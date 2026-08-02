#include<iostream>
#include<vector>
using namespace std;

int firstOccur(int *arr , int n , int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;
    cout << "mid is " << mid << endl;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            cout << "index is " << mid << endl;
            ans = mid;
            e = mid-1;
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
    return ans;
}


int lastOccur(int *arr , int n , int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;
    cout << "mid is " << mid << endl;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            cout << "index is " << mid << endl;
            ans = mid;
            s = mid+1;
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
    return ans;
}

int main()
{
    int arr[9] = {1,2,3,3,3,4,5,6,8};

    int first = firstOccur(arr , 9 , 3);
    int last = lastOccur(arr , 9 , 3);
    cout << "first occurence of 3 is at index " << firstOccur(arr , 9 , 3) << endl;

    cout << "last occurence of 3 is at index " << lastOccur(arr , 9  ,3) << endl;

    int ans = last-first+1;
    cout << "total occurence of 3 is " << ans << endl;

    return 0;
}