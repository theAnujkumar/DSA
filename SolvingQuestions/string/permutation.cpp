// permutation = factorial(no. of characters)/each no. factorial

#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include<map>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

int givePermutation(string str)
{

}

int main()
{
    //string str = "abc";
    //string str = "abcc";
    string str = "hello";
    int n = str.size();

    map<char,int> freq;
    // take count of each char
    for(char ch:str)
    {
        freq[ch]++;
    }

    //int num = fact(n);
    int ans = fact(n);
    for(auto it:freq)
    {
        ans = ans/fact(it.second);
        // int den = fact(it.second);
        // ans = num/den;
    }

    //int ans = givePermutation(str);
    cout << "ans is " << ans << endl;
    
}