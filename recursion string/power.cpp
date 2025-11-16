#include<iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if(b == 0)
    return 1;

    if(b==1)
    return a;

    // recursive call
    int ans = power(a , b/2);

    // even
    if(b%2==0)
    {
        return ans*ans;
    }

    else{
        return a*ans*ans;
    }

}
int main()
{
    int a,b;
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;
    cout << endl;

    cout << power(a,b) << endl;
}