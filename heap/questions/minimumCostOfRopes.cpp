#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
  public:
    int minCost(vector<int>& arr) {

        int n = arr.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        int cost = 0;

        for(int i=0 ; i<n ; i++)
        {
            pq.push(arr[i]);
        }

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();

            int b = pq.top();
            pq.pop();

            int sum = a+b;

            cost += sum;

            pq.push(sum);
        }
        return cost;
    }
};

// sc = O(n)
// tc = O(nlogn)
// n = element  ,  logn = insertion in pq