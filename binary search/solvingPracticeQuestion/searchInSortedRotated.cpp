#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s = 0;
    int e = n-1;
    
    while(s<=e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] == k)
        {
            return mid;
        }

        // left sorted hai
        if(arr[s] <= arr[mid])
        {
            if(k>=arr[s] && k<arr[mid])
            {
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        // right sorted hai
        else{
            if(k > arr[mid] && k <= arr[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }
    return -1;
}
