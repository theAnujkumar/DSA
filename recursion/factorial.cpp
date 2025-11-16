#include<iostream>
using namespace std;

int fact(int n)
{
    // base case
    // segmentation fault if base case is not use
    if(n==0)
    {
        return 1;
    }

    //int small = fact(n-1);
    //int large = n * small;

    //return large;

    // recursive relation
    return n * fact(n-1);
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;
}