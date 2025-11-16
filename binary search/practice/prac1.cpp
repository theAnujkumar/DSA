#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key)
{
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid-1;
        }

        // if(arr[mid] < arr[mid+1])
        // {
        //     s = mid + 1;
        // }
        // else{
        //     e = mid;
        // }

        if(arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else{
            e= mid;
        }
        if(key > arr[mid])
        {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int main() 
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int indexEven = binarySearch(even , 6 ,4);
    cout << "the index of 12 is " << indexEven << endl;

    int indexOdd = binarySearch(odd , 5 ,14);
    cout << "the index of 20 is " << indexOdd;

    return 0;
}