#include<iostream>
using namespace std;

int factorial(int n) 
{
    int fact = 1;
    //for(int i=n ; i!=0 ; i--)
    for(int i=1 ; i<=n ; i++) {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n,int r) {
    int num = factorial(n);
    int denom = factorial(n-r)/factorial(r);
    int ans = num / denom;
    return ans;
}
main () 
{
    int n , r;
    cout << "enter the value of n and r\n";
    cin >> n >> r;

    int total_ncr = ncr(n,r);
    cout << "the ncr is" << total_ncr;
}