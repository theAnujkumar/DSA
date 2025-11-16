#include<iostream>
using namespace std;
#include<string>
#include<math.h>
#include<vector>
#include<map>

bool isAnagram(string s1,string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }

    map<char,int> freq;
    for(char ch : s1)
    {
        freq[ch]++;
    }
    for(char ch : s2)
    {
        freq[ch]--;
        if(freq[ch] < 0)
            return false;
    }


    for(auto count : freq)
    {
        if(count.second != 0)
            return false;
    }
    
    return true;
}

int main() {
    string s1 = "listen", s2 = "silent";
    if (isAnagram(s1, s2))
        cout << "Anagram hai";
    else
        cout << "Anagram nahi hai";
}