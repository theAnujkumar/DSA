#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &arr,int k,int s,int e)
{
    while (s<=e)
    {
        swap(arr[s++],arr[e--]);
    }
}

void rotate(vector<int> &arr,int k)
{
    int n = arr.size();
    k = k%n;

    reverse(arr,k,0,n-1);
    reverse(arr,k,0,k-1);
    reverse(arr,k,k,n-1);
}

void printArray(int temp[] , int n , int k)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    for(auto a : arr)
    {
        cout << " " << a ;
    }
    cout << endl ;
    rotate(arr,k);
    for(auto a : arr)
    {
        cout << " " << a ;
    }
    

    cout << "\nnew form\n";
    //printArray(arr,4,2);
}