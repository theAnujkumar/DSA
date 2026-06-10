#include <bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    int fl = n/3;
    vector<int> ans;

    unordered_map<int,int> freq;

    for(auto num : arr)
    {
        freq[num]++;
    }

    for(auto count : freq)
    {
        if(count.second > fl)
        {
            ans.push_back(count.first);
        }
    }
    return ans;
}

/*
Sample Input 1 :
2
7
3 2 2 1 5 2 3
5
7 4 4 9 7
Sample Output 1:
2
4 7
Explanation of Sample Input 1:
In the first test case, floor(N/3) = floor(7/3) is equal to 2, 
and 2 occurs 3 times which is strictly more than N/3. 
No other element occurs more than 2 times.

In the second test case, floor(N/3) = floor(5/3) is equal to 1, 
and 4 and 7 both occur 2 times. No other element occurs more than once.
*/


// optimized solution Boyer-Moore Voting Algorithm (Extended Version) se hota hai.