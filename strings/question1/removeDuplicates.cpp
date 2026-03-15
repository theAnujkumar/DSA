#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int main() {
    string s = "apple";
    map<char, int> freq;
    string ans = " ";
    
    for(char ch:s)
    {
        if(freq[ch] == 0)
        {
            ans += ch;
            freq[ch] = 1;
        }
    }

    cout << "string is" << ans;
    

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
