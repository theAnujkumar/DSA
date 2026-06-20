#include<unordered_map>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int getMin(vector<int> &prices , int n)
{
    int mini = INT8_MAX;
    int index = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(prices[i] < mini) {
            mini = prices[i];
            index = i;
        }
    }
    return index;
}

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();

    // find least price
    int minDay = getMin(prices,n);

    for(int i=minDay ; i<n ; i++)
    {
        
    }

}