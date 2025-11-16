#include<iostream>
using namespace std;

void sortArray(int *arr ,int n)
{
    //base case 
    if(n==0 || n==1)
    {
        return ;
    }

    // 1 case solve  --> largest element ko last me place karna
    for(int i=0 ; i<n-1 ; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,n-1);
}

int main()
{
    int arr[5] = {2,1,12,9,10};
    int size = 5;

    sortArray(arr,size);
    
    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " " ;
    }
}