#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int kthSmallest(vector<int> &arr, int k) {
        // use max heap
        priority_queue<int> pq;
        int n = arr.size();

        for(int i=0 ; i<k ; i++)
        {
            pq.push(arr[i]);
        }

        for(int i=k ; i<n ; i++)
        {
            if(arr[i] < pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
}

int main()
{
    vector<int> arr = {7,10,4,3,20,15};
    int k = 3;

    cout << "ans is " << kthSmallest(arr,k);
}

// for kth Largest use min-heap

// tc = O(nlogn)
// sc = O(k) or O(N)