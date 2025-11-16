#include<iostream>
using namespace std;

int factorial(int n) 
{
    int fact = 1;
    for(int i=n ; i!=0 ; i--) {
    //for(int i=1 ; i<=n ; i++) 
        fact = fact * i;
    }
    return fact;
}

main () 
{
    int n;
    cout << "enter the value of n.\n";
    cin >> n;

    int ansfact = factorial(n);
    cout << "\nthe factorial is" << ansfact;
}

