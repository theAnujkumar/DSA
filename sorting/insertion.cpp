#include<iostream>
using namespace std;

int insertionSort(int arr[] , int n)
{
    for(int i=1 ; i<n ; i++)
    {
        int temp = arr[i];
        int j=i-1;
        for(int j=i-1 ; j>=0 ; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}