#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
#include<map>

bool checkDivisor(int n , int m)
{
    int n1 = 0;
    int m1 = 0;

    for(int i=1 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            n1+= i;
        }
    }
    cout << "n1 is " << n1 << endl;

    for(int i=1 ; i<m ; i++)
    {
        if(m%i == 0)
        {
            m1+= i;
        }
    }
    cout << "m1 is " << m1 << endl;

    if(n1==m && m1==n)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    // int n = 220;
    // int m = 284;
    int n = 10;
    int m = 20;

    bool ans = checkDivisor(n,m);
    if(ans)
    {
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}