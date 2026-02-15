#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "apple";
    unordered_map<char, int> freq;
    
    for(char ch:s)
    {
        freq[ch]++;
    }

    for(auto y:freq)
    {
        cout << y.first << " : " << y.second << endl;
    }

    // find to maximum occurence of character
    int maxi = -1;
    char ans;
    for(auto z:freq)
    {
        if(z.second > maxi)
        {
            maxi = z.second;
            ans = z.first;
        }
    }
    cout << "ans is " << ans;
    cout << " count is " << maxi << endl;



    // wrong method for s
    // for(auto t:s)
    // {
    //     cout << t.first << " : " << t.second << endl;
    // }

    for(auto t:s)
    {
       cout << t << " : " << freq[t] << endl;
    }

}

/*
    .first aur .second sirf pair (map/unordered_map) ke liye hote hain, 
     string ke characters (char) ke liye nahi.
*/