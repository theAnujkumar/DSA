#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isPalindrome2(string &s, int left, int right)
{
    while(left < right)
    {
        if(s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}

bool isPalindrome(string &temp)
{
    int n = temp.size();
    int s=0 ;
    int e=n-1;

    while(s<e)
    {
        if(temp[s]!=temp[e])
            return false;
        else{
            s++;
            e--;
        }
    }
    return true;
}

string longestPalindrome(string s) {
    int n = s.size();
    string ans = "";

    for(int i=0 ; i<n ; i++)
    {
        string temp = "";
        for(int j=i ; j<n ; j++)
        {
            temp+= s[j];
            if(isPalindrome(temp) && (temp.size()>ans.size()))
            {
                cout << "ans is " << ans << " " << endl;
                ans = temp;
            }
        }
    }

    /*
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(isPalindrome2(s, i, j))
            {
                if(j - i + 1 > ans.size())
                {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }
    }
    */

    for(int i=0 ; i<n ; i++)
    {
        for(int j=i ; j<n ; j++)
        {
            if(isPalindrome2(s,i,j))
            {
                if(j-i+1 > ans.size())
                {
                    ans = s.substr(i,j-i+1);
                }
            }
        }
    }
    return ans;
}

void expand(string &s , int left , int right , int &start , int &maxlen)
{
    while(left>=0 && right<=s.length() && s[left]==s[right])
    {
        if(right-left+1 > maxlen)
        {
            maxlen = right-left+1;
            start = left;
        }
        left-- , right++;
    }
}

string longestPalindrome2(string s)
{
    int n = s.length();
    int st = 0;
    int maxLen = 1;

    for(int i=0 ; i<n ; i++)
    {
        // for odd length
        expand(s,i,i,st,maxLen);

        // for even length
        expand(s,i,i+1,st,maxLen);
    }
    return s.substr(st,maxLen);
}

int main()
{
    string str = "aabaa";
    string ans = longestPalindrome(str);
    cout << "ans of longestPalindrome is " << ans << endl;
    return 0;
}

// tc = O(n^3)
// sc = O(1)