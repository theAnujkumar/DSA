#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool isPossible(vector<int>& arr,int n,int m,int mid)
// {
//     int studentCnt = 1;
//     int pageSum = 0;

//     for(int i=0 ; i<n ; i++)
//     {
//         if(pageSum+arr[i] < mid)
//         {
//             pageSum+= arr[i];
//         }
//         else{
//             studentCnt++;
//             if(studentCnt > m || arr[i]>mid)
//             {
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//         if(studentCnt > m)
//         {
//             return false;
//         }
//     }
//     return true;
// }


// int findPages(vector<int>& arr, int n, int m) {
//     // m = student , n = no. of pages

//     int s = 0;
//     int sum = 0;
//     for(int i=0 ; i<n ; i++)
//     {
//         sum+= arr[i];
//     }

//     int e = sum;
//     int ans = -1;
//     int mid = s+(e-s)/2;

//     // here we have search space b/w s and e
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid))
//         {
//             ans = mid;
//             // we have to find min.
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }

bool isPossible(vector<int> &stalls, int n , int k , int mid)
{
    int cowCnt = 1;
    int lastPos = stalls[0];

    for(int i=0 ; i<n ; i++)
    {
        if(stalls[i]-lastPos >= mid)
        {
            cowCnt++;
            if(cowCnt == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin() , stalls.end());
    int n = stalls.size();


    int s = 0;
    int maxi = -1;
    for(int i=0 ; i<n ; i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s+(e-s)/2;

    // here we have search space b/w s and e
    while(s<=e)
    {
        if(isPossible(stalls,n,k,mid))
        {
            ans = mid;
            // we have to find max.
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}