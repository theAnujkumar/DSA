#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }

    int remain = arr[0] + sum(arr+1,n-1);
    return remain;
}

bool search(int arr[],int n,int key)
{
    if(n==0)
    {
        return 0;
    }
    if(arr[0] == key)
    {
        return 1;
    }
    bool ans = search(arr+1,n-1,key);
    return ans;
}

bool isSorted(int arr[],int n)
{
    if(n==1 || n==0)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
}

bool binarySearch(int arr[],int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
    int mid = s+(e-s)/2;

    if(arr[mid] == key)
    {
        return true;
    }

    if(arr[mid] > key)
    {
        binarySearch(arr,s,mid-1,key);
    }
    else{
        binarySearch(arr,mid+1,e,key);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int n=5;

    int ans = sum(arr,5);
    cout << "sum is " << ans << endl;

    bool ans2 = search(arr,5,6);
    cout << "is present " << ans2 << endl;

}