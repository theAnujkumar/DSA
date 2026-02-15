#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

int findEquilibriumIndex(vector<int> &arr) {
    
    int n = arr.size();
    int totalSum = 0;

    for(auto x:arr)
    {
        totalSum += x;
    }
    int leftSum = 0;
    for(int i=0 ; i<n ; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            return i;
        }
        leftSum += arr[i];
    }

    // arr = [1, 3, 5, 2, 2]

    
    // for(int i=0 ; i<n ; i++)
    // {
    //     int leftSum = 0;
    //     int rightSum = 0;

    //     for(int j=0 ; j<i ; j++)
    //     {
    //         leftSum += arr[j];
    //     }
    //     for(int j=i+1 ; j<n ; j++)
    //     {
    //         rightSum += arr[j];
    //     }

    //     if(leftSum == rightSum)
    //     {
    //         return i;
    //     }
    // }
    // return -1;

}