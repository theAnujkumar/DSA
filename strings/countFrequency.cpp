#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "apple";
    unordered_map<char, int> freq;
    
    for(char ch:s)
    {
        freq[ch++];
    }

    for(auto y:freq)
    {
        cout << y.first << " : " << y.second << endl;
    }

}
