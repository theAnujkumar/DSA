#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr , int s , int e)
{
    int pivot = arr[s];
    int cnt = 0;

    // count how many elements are smaller than pivot
    for(int i=s+1 ; i<=e ; i++)
    {
        if(arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // here pivot should be on right place
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    // ensure all smaller elements should be on left side and larger on right to pivot
    int i = s , j = e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            i++;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(vector<int> &arr , int s , int e)
{
    // base case
    if(s>=e)
    {
        return;
    }

    // step 1 -> partition
    int p = partition(arr,s,e);

    // apply quick sort by using recursion call
    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);

}

int main()
{
    vector<int>arr = {2,4,1,6,9};
    int n=arr.size();

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    quickSort(arr,0,n-1);

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0;
}