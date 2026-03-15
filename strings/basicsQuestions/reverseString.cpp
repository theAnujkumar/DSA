#include<iostream>
using namespace std;
#include<string>
#include<vector>

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size()-1;

        while(st<e)
        {
            swap(s[st++] , s[e--]);
        }
    }
};

string reversestring(string s) {
    int left = 0, right = s.size() - 1;
    while(left < right) {
        swap(s[left++], s[right--]);
    }
    return s;
}

int main() {
    string str = "hello";
    cout << reversestring(str);
}

