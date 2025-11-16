#include<iostream>
using namespace std;

// no extra usage , no function call overhead
// function call replace with function body
inline int getMax(int &a ,int &b)
{
    return (a>b) ? a : b ;
}

int main()
{
    int a=1 , b=2;
    int ans = 0;

    ans = getMax(a,b);
    // return (a>b) ? a : b ;       // replace with this before compile time
    cout << ans << endl;

    a=a+3;
    b=b+1;

    ans = getMax(a,b);
    cout << ans << endl;
}