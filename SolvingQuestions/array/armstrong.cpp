#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int num)
{
    int originalNum = num;
    int nod = 0;

    // count no. of digits
    int temp = num;
    while(temp!=0)
    {
        //int val = temp%10;
        nod++;
        temp/=10;
    }

    // find armstrong value
    int value = num;
    int ans = 0;
    while(value!=0)
    {
        int val = value%10;
        ans+= pow(val,nod);
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

int evenSum(int num)
{
    int ans = 0;
    int val = num;
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

int oddSum(int num)
{
    int ans = 0;
    int val = num;
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
    int num = 2;

    if(isArmstrong(num))
    {
        // take sum of even digits
        int ans = evenSum(num);
        cout << "ans is " << ans << endl;
    }
    else{
        // take sum of odd digits
        int ans = oddSum(num);
        cout << "ans is " << ans << endl;
    }
    return 0;
}