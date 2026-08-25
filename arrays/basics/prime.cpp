#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;


bool isPrime(int n)
{
    bool isprime = 1;

    for(int i=2 ; i<n/2 ; i++)
    {
        if(n%i == 0)
        {
            isprime = false;
            break;
        }
    }
    return isprime;
}

int main()
{
    int n = 124;
    bool ans = isPrime(n);
    if(ans)
    {
        cout << "number is prime " << n << endl;
    }
    else{
        cout << "number is not prime " << n << endl;
    }
}