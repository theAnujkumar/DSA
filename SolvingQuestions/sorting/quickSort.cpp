#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
using namespace std;

int findPartition(vector<int> &arr , int low , int high)
{
    int pivot = arr[high];
    int i = low-1;

    for(int j=low ; j<high ; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    // place pivot in correct position
    swap(arr[i+1],arr[high]);

    // print pivot index
    cout << "pivot index is " << endl;
    cout << i+1 << " ";

    return i+1;
}

void quickSort(vector<int> &arr , int low , int high)
{
    if(low < high)
    {
        int partition = findPartition(arr,low,high);

        quickSort(arr, low, partition-1);
        quickSort(arr, partition+1 , high);
    }
}

int main()
{
    vector<int> arr = {4,2,7,1,3};
    int n = arr.size();

    cout << "print normal arrray " << endl;
    for(auto i:arr)
    {
        cout << i << " " ;
    }
    cout << endl;

    quickSort(arr,0,n-1);

    cout << "print sorted arrray " << endl;
    for(auto i:arr)
    {
        cout << i << " " ;
    }

    return 0;
}

// o/P 
// 2 1 3 4
// 1 2 3 4 7