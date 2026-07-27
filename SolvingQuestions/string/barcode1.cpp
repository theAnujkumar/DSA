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

int main()
{
    string str = "12ab";
    int n = str.size();
    int price = 0;

    for(int i=0 ; i<n ; i++)
    {
        // case 1 ->  if digit simple add
        //if(str[i]>='0' && str[i]<='9')
        if(isdigit(str[i]))
        {
            // str[i] gives ascii value of number so -48 need
            price+= (str[i] - 48);
            cout << "price is " << price << endl;
        }
        // give maximum no. of ascii value
        else{
            price+= findMaxDigit2(int(str[i]));         // give ascii value of char
        }
    }
    cout << "ans is " << price << endl;
    
}