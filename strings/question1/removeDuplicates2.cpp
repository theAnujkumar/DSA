#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int main() {
    string s = "apple";
    int freq[256] = {0};
    string ans = " ";

    for(char ch : s)
    {
        if(freq[(unsigned char)ch] == 0)
        {
            ans += ch;
            freq[(unsigned char)ch] = 1;
        }
    }

    cout << "string is" << ans;
}

// tc = O(n)
// sc = O(1)