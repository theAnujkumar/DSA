#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void expand(string &s,int left,int right,int &start,int &maxlen)
{
    int n = s.size();

    // yes,palindrome
    while(left>=0 && right<n && s[left]==s[right])
    {
        // check if any other palindrome exist of more length than this
        if(right - left + 1 > maxlen)
        {
            maxlen = right - left + 1;
            start = left; 
        } 
        left--;
        right++;
    }
}

string longestPalindrome(string s) {
    int n = s.size();
    int start = 0;
    int maxlen = 1;

    for(int i=0 ; i<n ; i++)
    {
        expand(s ,i, i, start, maxlen);       // for odd length
        expand(s ,i, i+1 , start, maxlen);       // for even length
    }
    return s.substr(start, maxlen);
}

int main()
{
    string str = "aabaa";
    string ans = longestPalindrome(str);
    cout << "ans of longestPalindrome is " << ans << endl;
    return 0;
}

// tc = O(n^2)
// sc = O(1)