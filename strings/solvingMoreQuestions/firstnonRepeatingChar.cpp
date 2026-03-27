#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatingCharacter(string str) {
    
        if(str.empty()) 
            return '\0';

        unordered_map <char,int> count;
        for(auto ch : str)
        {            
            count[ch]++;
        }
        
        for(auto ch : str)
        {            
            if(count[ch] == 1)
                return ch;
        }
        // If there is no non-repeating character, return the first character of the string.
        return str[0];
}

int main() {
    string s = "aabbcddee";
    cout << firstNonRepeatingCharacter("aabbccddee") << endl;
    cout << firstNonRepeatingCharacter("aabbcddee") << endl;
    cout << firstNonRepeatingCharacter(" ABcd") << endl;
}