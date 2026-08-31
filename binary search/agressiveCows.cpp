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
    //sort(stalls.begin() , stalls.end());

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
            // find max possible soln
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

/*
You are given an array 'arr' consisting of 'n' integers which denote the 
position of a stall.



You are also given an integer 'k' which denotes the number of aggressive cows.



You are given the task of assigning stalls to 'k' cows such that the minimum 
distance between any two of them is the maximum possible.



Print the maximum possible minimum distance.
*/