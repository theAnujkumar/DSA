#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;
//#include <unordered_map>

    char nonRepeatingChar(string s) {
        //  code here
        //char ans;
        
        unordered_map <char,int> count;
        
        for(auto ch : s)
        {            
            count[ch]++;
        }
        
        for(auto ch : s)
        {            
            if(count[ch] == 1)
                //ans = ch;
                //return ans;
                return ch;
        }
        return '$';
    }


int main() {
    string s = "aabbcddee";
    cout << nonRepeatingChar("aabbccddee") << endl;
    cout << nonRepeatingChar("aabbcddee");
}