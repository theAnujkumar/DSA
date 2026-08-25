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



bool isArmstrong2(int num)
{
    int originalNum = num;
    int nod = 0;

    // count no. of digits
    int temp = num;
    cout << "num is 1 " << num << endl;
    while(temp!=0)
    {
        //int val = temp%10;
        nod++;
        temp/=10;
    }
    cout << "num is 2 " << num << endl;

    // find armstrong value
    int value = num;
    cout << "value is " << value << endl;
    int ans = 0;
    while(value!=0)
    {
        int val = value%10;
        cout << "ans is " << ans << endl;
        ans = ans + pow(val,nod);
        value/=10;
    }
    cout << "num is 3 " << num << endl;

    cout << "ans is  " << ans << endl;
    cout << "originalNum is  " << originalNum << endl;
    // check if armstrong or not
    if(ans == originalNum)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    //int num = 153;
    long long int num = 153;


    if(isArmstrong(num))
    {
        cout << "number is Armstrong " << num << endl;
    }
    else{
        cout << "number is not Armstrong " << num << endl;
    }
    return 0;
}