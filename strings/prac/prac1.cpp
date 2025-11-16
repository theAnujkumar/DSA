#include<iostream>
#include<string>
using namespace std;

char getMaxOccurChar(string s)
{
    int arr[26] = {0};

    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        int num = 0;
        
        if(ch >='a' && ch<='z')
        {
            num = ch - 'a';
        }
        else{
            num = ch - 'A';
        }
        arr[num]++;
    }

    int maxi = -1;
    int ans = 0;

    for(int i=0 ; i<26 ; i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }
    char finalans = ans + 'a';
    return finalans;
}