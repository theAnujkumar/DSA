#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int count(int left, int right, string s)
{
    int res = 0;
    while((left>=0 && right<=s.size()) && s[left] == s[right])
    {
        res+= 1;
        left--;
        right++;
    }
    return res;
}

int specialPalindromes(string &str)
{
    int res = 0;
    for(int i=0 ; i<str.size() ; i++)
    {
        // for odd case
        res+= count(i,i,str);

        // for even case
        res+= count(i,i+1,str);
    }
    return res;
}

int main()
{
    string str = "aabcc";
    int ans = specialPalindromes(str);
    cout << "ans of specialPalindromes is " << ans << endl;
    return 0;
}
// tc = O(N^2)

/*
Case	                                Time	    Space
string s (pass by value)	            O(n²)	    O(n) (copy due to pass-by-value)
const string &s (pass by reference)	    O(n²)	    O(1)
*/