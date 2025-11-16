#include<iostream>
using namespace std;

int power(int p)
{
    // base case
    if(p==0)
    {
        return 1;
    }

    //int small = fact(n-1);
    //int large = n * small;

    //return large;

    // rec rel
    return 2 * power(p-1);
}

int main()
{
    /*
    int b;
    cout << "enter the base value" << endl;
    cin >> b;
    */

    int p;
    cout << "enter the power value" << endl;
    cin >> p;

    int ans = power(p);
    cout << ans << endl;
}