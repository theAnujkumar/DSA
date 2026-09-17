#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isPalindrome1(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        while (left < right && str[left] == ' ') left++;
        while (left < right && str[right] == ' ') right--;

        if (tolower(str[left]) != tolower(str[right])) 
            return false;
        left++; right--;
    }
    return true;
}

bool isPalindrome(const string &s) {
    int i = 0, j = s.size() - 1;
    while(i < j) {
        if(tolower(s[i]) != tolower(s[j]))
            return false;
        i++ , j--;
        //if(s[i++] != s[j--]) return false;
    }
    return true;
}

int main() {
    cout << (isPalindrome("Nurses Run") ? "Palindrome" : "Not Palindrome") << "\n";
    return 0;
}