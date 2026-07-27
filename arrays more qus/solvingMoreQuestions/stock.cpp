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

    // // find least price
    // int minDay = getMin(prices,n);

    // for(int i=minDay ; i<n ; i++)
    // {
        
    // }

    int ans = 0;
    for(int i=0 ; i<n ; i++)
    {
        int buy = prices[i];
        
        for(int j=i+1 ; j<n ; j++)
        {
            int sell = prices[j];
            ans = max(ans,sell-buy);
            cout << "ans for each loop " << ans << endl;
        }
    }
    return ans;
}

int maximumProfitOptimze(vector<int> &prices)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < prices.size(); i++)
    {
        minPrice = min(minPrice, prices[i]);

        int profit = prices[i] - minPrice;

        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = {2,100,150,120};
    int ans = maximumProfit(prices);
    cout << "ans is " << ans << endl;
    return 0;
}

/*
Step 1: Brute Force socho

Tum ye kar rahe the:

Har buy day
    Har sell day
        Profit nikalo

Time Complexity:

O(n²)

Problem ye hai ki har baar dobara-dobara future prices check kar rahe ho.

*/
/*
int prev = sell-buy;
            if(prev >= 0)
                maxi = prev;
            maxi = max(maxi,prev);
            cout << "max is " << maxi << endl;
*/