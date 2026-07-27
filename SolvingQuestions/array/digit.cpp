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


int main()
{
    int a = 3521;
    int b = 2452;
    int c = 1352;

    int ans = 0;

    // take from last digit to first digit
    for(int i=0 ; i<4 ; i++)
    {
        // for even case
        if(i%2 == 0)
        {
            // take largest
            //ans = ans*10 + max({a%10 , b%10 , c%10});
                    // or
            ans+= pow(10,i) * max({a%10 , b%10 , c%10});        
            // it automatically ensure that it would store in right manner not need reverse
        }
        else{
            // take smallest
            //ans = ans*10 + min({a%10 , b%10 , c%10});
                    // or
            ans+= pow(10,i) * min({a%10 , b%10 , c%10});
        }

        a = a/10;
        b/=10;
        c/=10;
    }
    cout << "before reverse ans is " << ans << endl;
    //ans = reverse(ans);
    cout << "ans is " << ans << endl;
}