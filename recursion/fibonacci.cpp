#include<iostream>
using namespace std;

int fibo(int n)
{
    //base case

    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }

    // recursive relation
    int ans = fibo(n-1) + fibo(n-2);

    return ans;
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    cout << fibo(n) << endl;
}

// 0 1 1 2 3 5