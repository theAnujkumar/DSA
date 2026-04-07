#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr , int n ,int k ,int mid)
{
    int painterCount = 1;
    int paintSum = 0;

    for(int i=0 ; i<n ; i++)
    {
        // for painter 1 how many paint alocated
        if(paintSum + arr[i] <= mid)
        {
            paintSum += arr[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || arr[i]>mid)
            {
                return false;
            }

            paintSum = arr[i];
        }

        if(painterCount > k) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pagesum << endl;
    }
    
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    int s = 0;
    int sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        sum = sum + boards[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(boards,n,k,mid))
        {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}