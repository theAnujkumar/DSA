#include<iostream>
using namespace std;

// int power2(int n)
// {
//     int k=3;

//     if(n==0)
//         return 1;
    
//     return (k * power2(n-1));
// }

void saydigit(int n , string arr[])
{
    if(n==0)
    {
        return;
    }
    int num = n%10;
    n = n/10;
    saydigit(n,arr);
    cout << arr[num];
    
}

int main()
{
    // int n = 3;

    // int ans = power2(n);
    // cout << ans;

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    saydigit(n,arr);
}