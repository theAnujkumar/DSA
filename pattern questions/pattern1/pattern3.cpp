#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void pattern1(int n)
{
    // right print
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }

    // print reverse
    for(int i=n ; i>=1 ; i--)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
}

void pattern2(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(i==j)
            {
                cout << "*" ;
            }
            cout << " ";
        }
        // for(int j=n ; j>=1 ; j--)
        // {

        // }
        cout << endl ;
    }
}

void pattern3(int n)
{
    for(int i=n ; i>=1 ; i--)
    {
        for(int j=1 ; j<=i ; j++)
        {
            if(i == j)
            {
                cout << "*" ;
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    //pattern1(n);

    cout << endl ;

    pattern2(n);

    cout << endl ;

    //pattern3(n);

    return 0;
}