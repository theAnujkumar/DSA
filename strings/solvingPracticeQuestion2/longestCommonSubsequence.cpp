#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// class Solution {
//     private:
    int solve(string s1, string s2,int i,int j)
    {
        if(i == s1.size() || j == s2.size())
        {
            return 0;
        }
        if(s1[i] == s2[j])
        {
            return 1+solve(s1,s2,i+1,j+1);
        }
        return max(solve(s1,s2,i+1,j),
                    solve(s1,s2,i,j+1));
    }

// public:
    int longestCommonSubsequence(string text1, string text2) {
        int cnt = 0;
        cnt+= solve(text1,text2,0,0);
        return cnt;
        //cout << "ans of longestCommonSubsequence is " << cnt << endl;
    }

    int main()
    {
        string text1 = "abc";
        string text2 = "ac";
        int ans = longestCommonSubsequence(text1,text2);
        cout << "ans of longestCommonSubsequence is " << ans << endl;
    }
// };

// Count all subsequences tc = O(2^n)

/*
if(s[i]==t[j])

1+solve(i+1,j+1)

else

max(solve(i+1,j),
    solve(i,j+1))
*/


// try to do such like
/*
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
*/