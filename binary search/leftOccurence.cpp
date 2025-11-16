#include<iostream>
#include<vector>
using namespace std;


int firstOccur(int arr[] , int n , int key)
//int firstOccur(vector<int> &arr , int n , int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid ;
            // place to left
            e = mid - 1;
        }

        if(arr[mid] < key)
        {
            // go to right side
            s = mid + 1;
        }
        else
        {
            // go to left side
            e = mid - 1;
        }

        mid = s + (e-s)/2; 
    }
    return ans;

}

int lastOccur(int arr[] , int n , int key)
//int lastOccur(vector<int> &arr , int n , int key)

{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid ;
            // place to right
            s = mid + 1;
        }

        if(arr[mid] < key)
        {
            // go to right side
            s = mid + 1;
        }
        else
        {
            // go to left side
            e = mid - 1;
        }

        mid = s + (e-s)/2; 
    }
    return ans;

}

/*
pair <int , int> firstAndLastPosition(vector<int>&arr,int n,int k)
{
    pair<int , int> p;
    p.first = firstOccur(arr , n , k);
    p.second = lastOccur(arr , n , k);

    return p;
}

total occurence = (last index - first index) + 1; 
*/

main()
{
    int arr[9] = {1,2,3,3,3,4,5,6,8};

    cout << "first occurence of 3 is at index " << firstOccur(arr , 9 , 3);

    cout << "last occurence of 3 is at index " << lastOccur(arr , 9  ,3);
}