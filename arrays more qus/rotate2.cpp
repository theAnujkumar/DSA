#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &arr,int k,int start,int end)
{
    while(start<end)
    {
        swap(arr[start++],arr[end--]);
    }
}

// for right rotation
void rotateRight(vector<int> &arr,int k)
{
    int n = arr.size();
    k = k%n;

    reverse(arr,k,0,n-1);
    reverse(arr,k,0,k-1);
    reverse(arr,k,k,n-1);
}

// left rotation 
void rotate(vector<int> &arr,int k)
{
    int n = arr.size();
    k = k%n;

    reverse(arr,k,0,k-1);
    reverse(arr,k,k,n-1);
    reverse(arr,k,0,n-1);
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
    cout << endl ;
}