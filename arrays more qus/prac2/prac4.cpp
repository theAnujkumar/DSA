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
            int profit = sell-buy;
            ans = max(ans,profit);
            cout << "ans for each loop " << ans << endl;
        }
    }
    return ans;
}

int maximumProfitOptimze(vector<int> &prices)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i=1 ; i<prices.size() ; i++)
    {
        int price = prices[i];
        minPrice = min(minPrice,price);

        int profit = price-minPrice;
        maxProfit = max(profit,maxProfit);
    }
    return maxProfit;
}

vector<int> maxSlidingWindow(vector<int> &arr , int k)
{
    vector<int> ans;
    int n = arr.size();

    int windowSum = 0;
    int maxVal = INT8_MIN;

    for(int i=0 ; i<k ; i++)
    {
        maxVal = max(maxVal,arr[i]);
    }
    ans.push_back(maxVal);

    for(int i=k ; i<n ; i++)
    {
        int maxVal = INT8_MIN;
        for(int j=i-k+1 ; j<=i ; j++)
        {
            maxVal = max(maxVal,arr[j]);
        }
        ans.push_back(maxVal);
    }
    return ans;
}


int main()
{
    vector<int> prices = {2,100,150,120};
    int ans = maximumProfit(prices);
    cout << "ans is " << ans << endl;

    int ans2 = maximumProfitOptimze(prices);
    cout << "ans 2 is " << ans2 << endl;

    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    //vector<int> arr = {1,3,-1,2,6};
    int k = 3;
    vector<int> result = maxSlidingWindow(arr,k);
    for(auto a : result)
    {
        cout << a << " " ;
    }

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