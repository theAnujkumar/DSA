#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}

int main()
{
    //int a,b;

    cout << "enter the value of a and b =";
    //cin >> a >> b;
    //int a = 3 , b = 8;
    int a = 2 , b = 6;

    cout << "\ngcd = " << gcd(a,b);

}

// LCM(a,b) * HCF(a,b) = a*b;
// gcd(a-b,a);