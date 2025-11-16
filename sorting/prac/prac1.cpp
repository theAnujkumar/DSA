#include<iostream>
using namespace std;

// in each round largest element will go to their right place
int bubbleSort(int arr[] , int n)
{
    // round 1 to n-1 or 0 to n-2
    bool swapped = false;
    // for(int i=0 ; i<n-1 < i++)
    for(int i=1 ; i<n ; i++)
    {
        // for(int j=0 ; j<n-i-1 ; j++)
        // process element till n-i index because after that array already sorted
        for(int j=0 ; j<n-i ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            // already sort
            break;
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] <<" ";
    }
}

main()
{
    int arr[5] = {2,7,4,1,9};
    int arr1[6] = {10,1,7,6,14,9};

    bubbleSort(arr,5);
    cout << endl;
    bubbleSort(arr1,6);
}

/* 
    in 1st round 1,7,6,10,9,14
    2nd          1,6,7,9,10,14
*/

