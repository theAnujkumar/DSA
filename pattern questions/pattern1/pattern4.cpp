#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

/*
1
12
123
1234
12345
*/
void pattern1(int n)
{
    // right print
    for(int i=1 ; i<=n ; i++)
    {
        int cnt = 1;
        for(int j=1 ; j<=i ; j++)
        {
            cout << cnt ;
            cnt++;
        }
        cout << endl ;
    }

    // print reverse
    // for(int i=n ; i>=1 ; i--)
    // {
    //     for(int j=1 ; j<=i ; j++)
    //     {
    //         cout << "*" ;
    //     }
    //     cout << endl ;
    // }
}


void pattern2(int n)
{
    /*
    1
    22
    333
    4444
    55555
    */
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << i ;
        }
        cout << endl ;
    }

    cout << endl ;

    // 1
    // 12
    // 123
    // 1234
    // 12345
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << j ;
        }
        cout << endl ;
    }

}

// 1
// 23
// 456
// 78910
void pattern3(int n)
{
    int cnt = 1;
    for(int i=1 ; i<n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << cnt ;
            cnt++;
        }
        cout << endl ;
    }
}

int main()
{
    int n = 5;

    pattern1(n);

    cout << endl ;

    pattern2(n);

    cout << endl ;

    pattern3(n);

    return 0;
}