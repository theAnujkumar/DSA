#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_map>
#include <string>
#include<vector>
using namespace std;


int specialPalindromes(string &str)
{
    int n = str.size();
    // doing compression
    vector<pair<char,int>> groups;

    int i=0;
    while(i<n)
    {
        int cnt = 1;
        //int j=i+1;
        while(i+1<n && str[i] == str[i+1])
        {
            cnt++;
            i++;
        }
        groups.push_back({str[i],cnt});
        i++;
    }

    // case 1 -> all same characters
    long long ans = 0;
    //int ans = 0;
    for(auto x : groups)
    {
        int len = x.second;

        ans+= 1LL * len * (len - 1) / 2;
        cout << "ans is" << ans;
    }

    // case 2 -> middle chars different
    for(int i=1 ; i<groups.size()-1 ; i++)
    {
        if(groups[i].second == 1 && 
            (groups[i-1].first == groups[i+1].first))
        {
            ans+= min(groups[i-1].second,groups[i+1].second);
        }
    }
    return ans;
}
// tc = O(N)

bool isSpecial(string sub)
{
    int n = sub.length();
    bool same = true;

    // all same
    for(int i=1 ; i<n ; i++)
    {
        if(sub[i] != sub[0])
        {
            same = false;
            break;
        }
    }
    if(same)
        return true;

    // middle is different
    if(n%2 == 0)
        return false;

    int mid = n/2;
    for(int i=0 ; i<n ; i++)
    {
        if(i==mid)
            continue;
        if(sub[i] != sub[0])
            return false;
    }
    return true;
}

int specialPalindromes2(string &str)
{
    int n = str.size();
    int count = 0;

    // generate all substring
    for(int i=0 ; i<n ; i++)
    {
        // palindromic substrings of size greater than 1 
        // so use j=i+1  otherwise j=i
        for(int j=i+1 ; j<n ; j++)
        {
            string sub = str.substr(i,j-i+1);
            if(isSpecial(sub))
            {
                count++;
            }
            // if(str[i] == str[j])
            //     count++;
            // int strjsize = str.size();
            // else if(strjsize%2 != 0)
            // {
            //     count++;
            // }
        }
    }
    return count;
}

int main()
{
    string str = "aabaa";
    int ans = specialPalindromes(str);
    cout << "ans of specialPalindromes is " << ans << endl;
    return 0;
}

/*
Time Complexity
Total substrings = O(n²)
Har substring ki copy (substr) = O(n)
isSpecial() = O(n)

Overall complexity:

O(n³)
*/