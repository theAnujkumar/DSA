#include <iostream>
#include <unordered_set>
using namespace std;

string removeDuplicates(string s) {
    string ans = "";
    unordered_set<char> seen;
    for(char c : s) {
        if(!seen.count(c)) {
            ans += c;
            seen.insert(c);
        }
    }
    return ans;
}

int main() {
    cout << removeDuplicates("programming");
}  


// tc = O(n)
// sc = O(1)

/*

s = "programming"
ans = ""  
seen = { }   // empty set

1. c = 'p'

seen.count('p') → 0 (not present)

ans = "" + 'p' → "p"

seen = {'p'}
*/