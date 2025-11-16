#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n*fact(n-1);
}

void count (int k)
{
    if(k==0)
        return ;

    count(k-1);

    cout << k << " " << endl;
}

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);

}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;

    count(5);

    cout << "fibo ans is "<< fibo(n) << endl;

    return 0;
}