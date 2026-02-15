#include<iostream>
using namespace std;

// take smallest element of array and place into right position
int selectionSort(int arr[] , int n)
{
    for(int i=0 ; i<(n-1) ; i++)
    {
        // firstly assume 0th index is contain minimum element
        int minIndex = i;

        // start from 1st index until n-1
        for(int j=i+1 ; j<n ; j++)
        {
            //if(arr[minIndex] > arr[j])
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] <<" ";
    }
}


int printArray(int arr[] , int n)
{
    for(int i=0 ; i<=n ; i++)
    {
        cout << arr[i] <<" ";
    }
}


main()
{
    int arr[5] = {2,7,4,1,9};

    selectionSort(arr,5);

    //printArray(arr,5);
    
}

// 2,7,4,1,9
/*
    isme 0th position me shi element dalna hai so check(7 to 9) = 1;
    so minindex jispe 2 hai usko swap kavana hai 1 se
    1,7,4,2,9

    now take 1th pos minindex pe 7 so check(4-9) = 2
    1,2,4,7,9

    now take 2nd pos minindex pe 4 so check(7-9) = 4 no change
    1,2,4,7,9

    now take 3rd pos minindex pe 7 so check(9) = 7 no change
    1,2,4,7,9

    isme n-1 round chalenge
*/