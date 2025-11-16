#include<iostream>
using namespace std;
#include<string>
#include<math.h>
#include<vector>

bool isAnagram(string s1,string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }

    vector<int> freq(26,0);
    for(int i=0 ; i<s1.length() ; i++)
    {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for(int count : freq)
    {
        if(count != 0)
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

// tc=O(n)
// sc = O(1)
/*
Time: O(n) (har character ek hi baar count ho raha hai)

Space: O(k) (jitne unique characters hai utna space)
*/