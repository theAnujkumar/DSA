#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
using namespace std;

long long power(long long x , long long n)
{
    long long ans = 1;
    for(int i=0 ; i<n ; i++)
    {
        ans = ans*x;
    }
    return ans;
}

bool isArmstrong(long long num)
{
    long long originalNum = num;
    long long nod = 0;

    // count no. of digits
    long long temp = num;
    while(temp!=0)
    {
        //int val = temp%10;
        nod++;
        temp/=10;
    }

    // find armstrong value
    long long value = num;
    long long ans = 0;
    while(value!=0)
    {
        int val = value%10;
        ans+= power(val,nod);
        value/=10;
    }

    // check if armstrong or not
    if(ans == originalNum)
    {
        return true;
    }
    else{
        return false;
    }
}

int evenSum(long long num)
{
    int ans = 0;
    long long val = num;
    while(val!=0)
    {
        int digit = val%10;
        if(digit%2 == 0)
        {
            ans+= val%10;
        }
        val/=10;
    }
    return ans;
}

int oddSum(long long num)
{
    int ans = 0;
    long long val = num;
    while(val!=0)
    {
        int digit = val%10;
        if(digit%2 != 0)
        {
            ans+= val%10;
        }
        val/=10;
    }
    return ans;
}

int main()
{
    long long val = 153;
    //long long val = 24;
    int ans = 0;

    if(isArmstrong(val))
    {
        //long long val = num;
        while(val!=0)
        {
            int digit = val%10;
            if(digit%2 == 0)
            {
                ans+= val%10;
            }
            val/=10;
        }
        // // take sum of even digits
        // int ans = evenSum(num);
        // cout << "ans is " << ans << endl;
    }
    else{
        //long long val = num;
        while(val!=0)
        {
            int digit = val%10;
            if(digit%2 != 0)
            {
                ans+= val%10;
            }
            val/=10;
        }
        // // take sum of odd digits
        // int ans = oddSum(num);
        // cout << "ans is " << ans << endl;
    }
    cout << "ans is " << ans << endl;
    return 0;
}