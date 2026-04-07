#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;

    // int mid = s + (e-s)/2;

    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0])
        // first line so move to next line
        {
            s = mid + 1;
        }

        else{
            e = mid;
        }
    }
    return s;
}

int binarySearch(vector<int>& arr , int s , int e , int key)
{
    int start = s;
    int end = e;
    // int end = e - 1;

    // int mid = start + (end - start)/2;

    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        else if(key > arr[mid])
        {
            start = mid + 1;
        }

        // go to left part
        else{
            end = mid -1;
        }

        //mid = start + (end - start)/2;
    }

    return -1;
}

int search(vector<int>& arr, int n, int k)
{

    int pivot = getPivot(arr,n);

    if(k>=arr[pivot] && k<=arr[n-1])
    {
        // move to 2 line
        return binarySearch(arr,pivot,n-1,k);
        //return binarySearch(arr,pivot,n,k);  then use
        // int end = e-1;
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
    // Write your code here.
    // Return the position of K in ARR else return -1.
    // int s = 0;
    // int e = n-1;
    
    // while(s<=e)
    // {
    //     int mid = s + (e-s)/2;

    //     if(arr[mid] == k)
    //     {
    //         return mid;
    //     }

    //     // left sorted hai
    //     if(arr[s] <= arr[mid])
    //     {
    //         if(k>=arr[s] && k<arr[mid])
    //         {
    //             e = mid - 1;
    //         }
    //         else{
    //             s = mid + 1;
    //         }
    //     }

    //     // right sorted hai
    //     else{
    //         if(k > arr[mid] && k <= arr[e]) {
    //             s = mid + 1;
    //         } else {
    //             e = mid - 1;
    //         }
    //     }
    // }
    // return -1;
}

// int search(vector<int>& arr, int n, int k)
// {
//     // Write your code here.
//     // Return the position of K in ARR else return -1.
//     int s = 0;
//     int e = n-1;
    
//     while(s<=e)
//     {
//         int mid = s + (e-s)/2;

//         if(arr[mid] == k)
//         {
//             return mid;
//         }

//         // left sorted hai
//         if(arr[s] <= arr[mid])
//         {
//             if(k>=arr[s] && k<arr[mid])
//             {
//                 e = mid - 1;
//             }
//             else{
//                 s = mid + 1;
//             }
//         }

//         // right sorted hai
//         else{
//             if(k > arr[mid] && k <= arr[e]) {
//                 s = mid + 1;
//             } else {
//                 e = mid - 1;
//             }
//         }
//     }
//     return -1;
// }
