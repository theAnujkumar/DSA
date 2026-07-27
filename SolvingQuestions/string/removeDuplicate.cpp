#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <string>
using namespace std;

string removeDup(string &s)
{
    unordered_set<char> seen;
    string ans = "";

    for(auto ch : s)
    {
        if(!seen.count(ch))
        {
            ans+= ch;
            seen.insert(ch);
        }
    }
    return ans;
}

int main() {
    string s = "apple";
    string s2 = "banana";
    map<char,int> mp;
    string ans = "";

    for(auto ch : s)
    {
        if(mp[ch] == 0)
        {
            ans += ch;
            mp[ch]++;
        }
    }

    cout << "string is " << ans << endl;

    string result = removeDup(s2);
    cout << "string is " << result << endl;
    

    // tc = O(n)
    // sc = O(1)

    // for(char ch:s)
    // {
    //     freq[ch]++;
    // }

    // for(auto y:freq)
    // {
    //     cout << y.first << " : " << y.second << endl;
    // }

    // for(auto y:freq)
    // {
    //     if(y.second == 1)
    //     {
    //         ans = ans + y.first;
    //     }
    // }
    // cout << "string is" << ans;

    //                  this give a,e,l  not a,e,p,l

    

    // wrong method for s
    // for(auto t:s)
    // {
    //     cout << t.first << " : " << t.second << endl;
    // }

}
