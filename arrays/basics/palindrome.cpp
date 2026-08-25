#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int reverse(int digit)
{
    int ans = 0;
    while(digit)
    {
        int val = digit % 10;
        ans = ans*10 + val;
        digit = digit/10;
    }
    return ans;
}

bool isPalindrome(int n)
{
    int temp = n;
    int ans = 0;
    while(temp!=0)
    {
        int val = temp%10;
        ans = ans*10 + val;
        temp = temp/10;
    }
    if(n == ans)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n = 1221;
    bool ans = isPalindrome(n);
    if(ans)
    {
        cout << "number is Palindrome " << n << endl;
    }
    else{
        cout << "number is not Palindrome " << n << endl;
    }
}