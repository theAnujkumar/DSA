#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
using namespace std;

// array a in ascending
// array b in descending

// create new array of size O(m+n) contain both element in sorted ascending order

vector<int> ascending(vector<int> &arr1 , int n,vector<int> &arr2 , int m,vector<int> &arr)
{
    int i=0;
    int j=m-1;
    int k=0;
    while(i<n && j>=0)
    {
        if(arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j--];
        }
    }
    
    // only arr1 elements left
    while(i<n)
    {
        arr[k++] = arr1[i++];
    }

    // only arr2 elements left
    while(j>=0)
    {
        arr[k++] = arr2[j--];
    }
    return arr;
}

int main()
{
    // for input from user
    // vector<int> arr;
    // int n ;
    // cin >> n;

    // for(int i=0 ; i<n ; i++)
    // {
    //     cin >> arr[i];
    // }

    //vector<int> arr = {5,9,12,23,31};
    vector<int> arr1 = {1,4,7,10};
    int n = arr1.size();

    vector<int> arr2 = {15,12,8,3};
    int m = arr2.size();

    vector<int> arr(n+m);

    vector<int> ans = ascending(arr1,n,arr2,m,arr);
    for(auto i:ans)
    {
        cout << i << " " ;
    }
    
    return 0;
}

// o/p  = [1,3,4,7,8,10,12,15]