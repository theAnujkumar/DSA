#include<iostream>
using namespace std;

// in each round largest element will go to their right place
int bubbleSort(int arr[] , int n)
{
    bool swapped = false;
    for(int i=1 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == true)
        {
            break; 
        }
    }
}

int selectionSort(int arr[] , int n)
{
    for(int i=0 ; i<n-1 ; i++)
    //for(int i=1 ; i<n ; i++)
    {
        int minIndex = i;
        for(int j=i+1 ; j<n ; j++)
        //for(int j=i ; j<n ; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
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

    // bubbleSort(arr,5);
    // cout << endl;
    // bubbleSort(arr1,6);

    selectionSort(arr,5);
    cout << endl;
    selectionSort(arr1,6);
}

/* 
    in 1st round 1,7,6,10,9,14
    2nd          1,6,7,9,10,14
*/

