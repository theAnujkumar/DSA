#include<iostream>
using namespace std;

// two pointer approach
int printArray(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    } 
}

int sort(int arr[] , int n)
{
    int left = 0;
    int right = n-1;

    //int step = 0;

    while(left < right)
    {
        //cout << "step" << step++ <<endl ;
        //printArray(arr,n);
        //cout << endl;

        while(arr[left] == 0 && left < right)
        {
            left++ ;
        }
        while(arr[right] == 1 && left < right)
        {
            right-- ;
        }
        
        if(arr[left]==1 && arr[right]==0 && left<right)
        {
            swap(arr[left] , arr[right]);
            left++ ;
            right-- ;
        }
        
    }

    while(left < right)
    {
        //cout << "step" << step++ <<endl ;
        //printArray(arr,n);
        //cout << endl;

        if(arr[left] == 0)
        {
            left++ ;
        }
        else if(arr[right] == 1)
        {
            right-- ;
        }
        
        else
        {
            swap(arr[left] , arr[right]);
            left++ ;
            right-- ;
        }
        
    }

    cout << "returning the sorted array";
    printArray(arr,n);
    
}

/*
int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }*/

main()
{
    int arr[8] = {1,1,0,0,0,1,0,0};

    sort(arr , 8);

    //cout << "printing after function call";

    printArray(arr ,8);
}