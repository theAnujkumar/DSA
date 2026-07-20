#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;

int findMaxDigit(int digit)
{
    int maxi = 0;
    while(digit)
    {
        int val = digit % 10;
        if(maxi < val)
        {
            maxi = val;
        }
        digit = digit/10;
    }
    return maxi;
}

int findMaxDigit2(int digit)
{
    int maxi = 0;
    while(digit)
    {
        int val = digit % 10;
        maxi = max(maxi,val);
        digit = digit/10;
    }
    return maxi;
}

int giveProduct(int digit)
{
    int ans = 1;
    while(digit)
    {
        int val = digit % 10;
        ans = ans*val;
        digit = digit/10;
    }
    return ans;
}

int main()
{
    int digit = 5244;

    int ans = giveProduct(digit);
    cout << "ans is " << ans << endl;
    
}