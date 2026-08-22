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
        vector<int> freq(26,0);

        for(char ch:str)
        {
            freq[ch-'a']++;
        }
        string key = "";

        // it would store all keys elements in ascending order alphabatically
        // aet for tea,ate,eat
        for(int x : freq)
        {
            key += to_string(x) + '#';
        }
        mp[key].push_back(str);
    }

    // for each iteration store ans
    for(auto &itr : mp)
    {
        ans.push_back(itr.second);
    }
    return ans;
}


/*
Time Complexity (Frequency Method)
Frequency count: O(K) per string
Key generation: O(26) (constant)

Overall:

O(N × K)

Space

O(N × K)
*/

/*
xample:

eat

a = 1
b = 0
c = 0
...
e = 1
...
t = 1

Key:

1#0#0#0#1#0#...#1

tea aur ate ki frequency key bhi exactly same hogi.
*/