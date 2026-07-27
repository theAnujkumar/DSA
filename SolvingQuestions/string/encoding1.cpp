#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;

// char at even index move 2 step forward
// at odd index move 1 step backword

string stringEncoding(string &str)
{
    int n = str.size();
    // check not contain any space
    for(char ch:str)
    {
        if(ch == ' ')
            return "error";
    }

    for(int i=0 ; i<n ; i++)
    {
        char ch = str[i];
        // for even case move 2 step forward
        if(i%2 == 0)
        {
            if(ch=='Z')
                str[i] = 'B';
            else if(ch=='z')
                str[i] = 'b';
            else{
                str[i] = str[i]+2;
                //str[i] = i+2;
            }
        }

        // for odd case move 1 step backword
        else{
            if(ch=='A')
                str[i] = 'Z';
            else if(ch=='a')
                str[i] = 'z';
            else if(ch=='0'){
                str[i] = '9';
            }
            else{
                str[i] = str[i]-1;
            }
        }
    }
    return str;
}

int main()
{
    string str = "AbcZ0";
    string ans = stringEncoding(str);
    cout << "final string is " << ans << endl;
}

// CaeY2