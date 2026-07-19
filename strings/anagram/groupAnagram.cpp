#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
#include<string>
#include<math.h>
#include<vector>
#include<unordered_map>

vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    // take hashmap for map key->list of strings
    unordered_map<string,vector<string>> mp;

    // take ans to store
    vector<vector<string>> ans;

    for(auto str : inputStr)
    {
        string temp = str;
        sort(temp.begin(),temp.end());
        // push into map
        mp[temp].push_back(str);
    }

    // for each iteration store ans
    for(auto &itr : mp)
    {
        ans.push_back(itr.second);
    }
    return ans;
}


/*
Time Complexity

Suppose

N = number of strings
K = maximum length of a string

Har string ko sort kar rahe hain.

Sorting cost

O(K log K)

Total

O(N × K log K)

Space

O(N × K)
*/