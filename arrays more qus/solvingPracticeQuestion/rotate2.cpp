#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>&arr , int s,int e)
{
    while(s<=e)
    {
        swap(arr[s++],arr[e--]);
    }

    return arr;
}

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    k = k%n;
    //vector<int>temp(n);

    reverse(arr,0,k-1);   // phele k tak reverse
    reverse(arr,k,n-1);     // for k se n tak
    reverse(arr,0,n-1);      // fir n tak

    return arr;
}


// tc = O(N)
// sc = O(1)



// vector<int> reverse(vector<int>&arr , int n)
// {
//     int s=0;
//     int e=n-1;

//     while(s<=e)
//     {
//         swap(arr[s++],arr[e--]);
//     }

//     return arr;
// }

// vector<int> rotateArray(vector<int>arr, int k) {
//     // Write your code here.
//     int n=arr.size();
//     k = k%n;
//     //vector<int>temp(n);

//     for(int i=0 ; i<n ; i++)
//     {
//         reverse(arr,n);
//     }
//     for(int i=0 ; i<k ; i++)
//     {
//         reverse(arr,k);
//     }
//     for(int i=k ; i<n ; i++)
//     {
//         reverse(arr,n-k);
//     }

//     return arr;
// }

// reverse() ko pata hi nahi chal raha ki start aur end kaha tak reverse karna hai.