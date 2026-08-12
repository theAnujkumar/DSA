#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
#include<unordered_map>
using namespace std;

// return the smallest product id
int findMaxFreqElement(vector<int> &arr , int n)
{
    
    unordered_map<int,int> freq;

    // count freq of each items
    for(auto num : arr)
    {
        freq[num]++;
    }

    int maxAns = 0;
    int maxfreq = 0;

    // find product with highest frequency
    for(auto it : freq)
    {
        int id = it.first;
        int cnt = it.second;
        if(cnt > maxfreq)
        {
            maxfreq = cnt;
            maxAns = id;
        }
        // use for special case
        // so that print 1st number if multiple product id appears same frequency 
        else if(cnt==maxfreq && id<maxAns)
        {
            maxAns = id;
        }
    }
    return maxAns;
}


// return the largest product id
int findMaxFreqElement2(vector<int> &arr , int n)
{
    
    unordered_map<int,int> freq;

    // count freq of each items
    for(auto num : arr)
    {
        freq[num]++;
    }

    int maxAns = 0;
    int maxfreq = 0;

    // find product with highest frequency
    for(auto it : freq)
    {
        int id = it.first;
        int cnt = it.second;
        if(cnt > maxfreq)
        {
            maxfreq = cnt;
            maxAns = id;
        }
        // use for special case
        // so that print 1st number if multiple product id appears same frequency 
        else if(cnt==maxfreq && id>maxAns)
        {
            maxAns = id;
        }
    }
    return maxAns;
}

int findMinFreqElement(vector<int> &arr , int n)
{
    unordered_map<int,int> freq;

    // count freq of each items
    for(auto num : arr)
    {
        freq[num]++;
    }

    int minFreq = INT8_MAX;
    int minAns = 0;

    for(auto ch : freq)
    {
        int id = ch.first;
        int cnt = ch.second;

        if(cnt < minFreq)
        {
            minFreq = cnt;
            minAns = id;
        }
    }
    return minAns;
}


int main()
{
    // vector<int> arr;
    // int n ;
    // cout << "enter no. of elements in array represent product id " << endl;
    // cin >> n;

    // cout << "enter product id " << endl;
    // for(int i=0 ; i<n ; i++)
    // {
    //     cin >> arr[i];
    // }

    //vector<int> arr = {5,9,12,23,31};
    vector<int> arr1 = {1,2,2,3,3,4,1};
    int n = arr1.size();

    for(auto i:arr1)
    {
        cout << i << " " ;
    }
    cout << endl;

    int ans = findMaxFreqElement(arr1,n);
    cout << "ans1 is " << ans << endl;

    int ans3 = findMinFreqElement(arr1,n);
    cout << "ans3 is " << ans3 << endl;


    vector<int> arr2 = {3,1,2,2,4,1,3};
    int n2 = arr1.size();
    cout << "ans2 is " << findMaxFreqElement2(arr2,n2) << endl;
    return 0;
}
// o/p = 1

// find product id that appears most frequently in the array
// if multiple product id appears same frequency then return the smallest product id