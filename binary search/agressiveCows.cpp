#include<iostream>
using namespace std;

bool isPossible(int stalls[] , int k ,int mid)
{
    int cowCount = 0;
    int lastPos = stalls[0];

    for(int i=0 ; i<5 ; i++)
    {
        if(stalls[i]-lastPos >= mid)
        {
            cowCount ++;
        if(cowCount == k)
        {
            return true;
        }
        // normal last position increase +1
        lastPos = stalls[i];
        }
    }
    return false;
}
int agressiveCows(int stalls[] , int k)
{
    //sort(stalls.begin() , sort.end());

    int s = 0;
    int maxi = -1;

    for(int i=0 ; i<5 ; i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(stalls,k,mid))
        {
            ans = mid ;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans ;
}

/*
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
   	int s = 0;
    int n = stalls.size();
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
*/