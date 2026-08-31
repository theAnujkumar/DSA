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

    int x = 10;
    char y = 'a';   // 97  char into int
    int z = x+y;
    cout << "z is " << z << endl;

    int p = 10;
    char q = 'a';   // a se 10 character agee
    // typecasting  -> int to char
    char t = p+q;
    cout << "t is " << t << endl;

    char ch = 'a';
    char ch2 = 'A';
    char ch3 = '0';
    int price = 0;

    ch = ch-32;         // to lower
    ch2 = ch2+32;          // to upper
    price+= ch3-48;         // to change in to number
    //ch3 = ch3-48;           
    cout << "a became " << ch << endl;
    cout << "A became " << ch2 << endl;
    cout << "0 became " << ch3 << endl;

    char ch4 = 'a';
    int d4 = ch4;
    //int d4 = int(ch4);
    cout << "ch4 became " << d4 << endl;

    //string ans = changeToSmallLarge(str);
   // cout << "final string ans is " << ans << endl;
}