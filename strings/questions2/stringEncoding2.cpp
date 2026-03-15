#include <bits/stdc++.h> 
#include<string>
#include<iostream>
using namespace std;

string encode(string &message)
{
    int i=0;
    int index = 0;
    int n = message.length();
    cout << n;

    //for(int i=0 ; i<n ; i++)          try to avoid use for loop in string of unknown length
    while(i<n)
    {
        char current = message[i];
        int count = 0;
        while(i<n && message[i] == current)
        {
            i++;
            count++;
        }
        message[index] = current;
        index++;
        
        string cnt = to_string(count);
        for(char ch : cnt)
        {
            if(index < message.length())
            {
                message[index] = ch;
            }
            // example ab = a1b1 length = 2 , resizeto = 4
            else{
                message.push_back(ch);
            }
            index++;
        }
    }
    message.resize(index);
    return message;
}

int main() {
    string s = "aaaabbbccdaa";
    string ans = encode(s);
    cout << "output is " << ans << endl;

    // "a4b3c2d1a2". output
}

// tc = O(N)
// sc = O(1)

