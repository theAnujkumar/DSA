/*
Dono ke letters same ho

Letters ka frequency (count) bhi same ho

Bas order alag ho sakta hai

👉 Example:

"listen" aur "silent" → anagram hai

"hello" aur "world" → anagram nahi hai
*/

#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<math.h>

bool isAnagram(string s1,string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1 == s2;
}

int main() {
    string s1 = "listen", s2 = "silent";
    if (isAnagram(s1, s2))
        cout << "Anagram hai";
    else
        cout << "Anagram nahi hai";
}

// tc=O(nlogn)