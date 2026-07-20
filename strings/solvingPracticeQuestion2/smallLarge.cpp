#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;

string changeToSmallLarge(string &str)
{
    int n = str.size();

    for(int i=0 ; i<n ; i++)
    {
        // it means even so convert into lower
        // ex A = 65 and a = 97
        if(i%2 == 0)
        {
            if(!(str[i]>='a' && str[i]<='z'))
            {
                str[i]+= 32;
                cout << "string is " << str << endl;
            }
        }
        else{
            str[i]-= 32;
            // str[i] = toupper(str[i]);
            cout << "string is " << str << endl;
        }
    }
    //cout << "final string is " << str << endl;
    return str;
}

int main()
{
    string str = "AbcdEf";
    int n = str.size();

    // for(int i=0 ; i<n ; i++)
    // {
    //     // it means even so convert into lower
    //     if(i%2 == 0)
    //     {
    //         str[i] = tolower(str[i]);
    //         cout << "string is " << str << endl;
    //     }
    //     else{
    //         str[i] = toupper(str[i]);
    //         cout << "string is " << str << endl;
    //     }
    // }
    // cout << "final string is " << str << endl;

    string ans = changeToSmallLarge(str);
    cout << "final string ans is " << ans << endl;
}