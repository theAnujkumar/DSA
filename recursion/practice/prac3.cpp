#include<iostream>
using namespace std;

void saydigit(int n,string arr[])
{
    if(n==0)
    {
        return;
    }

    int digit = n%10;
    n = n/10;

    saydigit(n,arr);

    cout << "digit is " << arr[digit] << endl;
    
}

int main() {

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout << "enter the value " << endl;
    cin >> n;

    saydigit(n,arr);
    return 0;
}