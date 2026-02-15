#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    
    int n = arr.size();
    // int mid = n/2;
    // int ans1 = 0;
    // int ans2 = 0;

    for(int i=0 ; i<n ; i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        for(int j=0 ; j<i ; j++)
        {
            leftSum += arr[j];
        }
        for(int j=i+1 ; j<n ; j++)
        {
            rightSum += arr[j];
        }

        if(leftSum == rightSum)
        {
            return i;
        }
    }
    return -1;

}
// int findEquilibriumIndex(vector<int> &arr) {
    
//     int n = arr.size();
//     // int mid = n/2;
//     // int ans1 = 0;
//     // int ans2 = 0;

//     for(int i=1 ; i<=n-2 ; i++)
//     {
//         int leftSum = 0;
//         int rightSum = 0;

//         for(int j=0 ; j<=i-1 ; j++)
//         {
//             leftSum += arr[j];
//         }
//         for(int k=i+1 ; k<=n-1 ; k++)
//         {
//             rightSum += arr[k];
//         }

//         if(leftSum == rightSum)
//         {
//             return i;
//         }
//     }
//     return -1;


//     // int s = 0;
//     // int e = n-1;

//     // while(s<e)
//     // {

//     // }
// }

 