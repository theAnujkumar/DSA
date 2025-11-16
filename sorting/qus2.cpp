#include<iostream>
using namespace std;

main()
{
    int arr[5] = {2,7,4,1,9};
    int n = 5;

    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=i+1 ; j<n ; j++)
    //     {
    //         if(arr[i] < arr[j])
    //         {
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
    for(int i=0 ; i<n-1 ; i++)
    {
        int maxIndex = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[maxIndex] < arr[j])
            {
                maxIndex = j;
            }
        }
        swap(arr[maxIndex],arr[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] <<" ";
    }
} 