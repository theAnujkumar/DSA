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

    // if(k>n)
    // {
    //     return -1;
    // }

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

main()
{
    vector<int> arr = {5,5,5,5};
    int n = arr.size();

    cout << "the answer is " << findLargestMinDistance(arr, 2);
}

/*
Given an array/list of length ‘n’, where the array/list represents the boards
 and each element of the given array/list represents the length of each board. 
 Some ‘k’ numbers of painters are available to paint these boards.
  Consider that each unit of a board takes 1 unit of time to paint.


You are supposed to return the area of the minimum time to get this job
 done of painting all the ‘n’ boards under a constraint that any painter will
  only paint the continuous sections of boards.


Example :
Input: arr = [2, 1, 5, 6, 2, 3], k = 2

Output: 11

Explanation:
First painter can paint boards 1 to 3 in 8 units of time 
and the second painter can paint boards 4-6 in 11 units of time. 
Thus both painters will paint all the boards in max(8,11) = 11 units of time.
 It can be shown that all the boards can't be painted in less than 11 units of time.
*/