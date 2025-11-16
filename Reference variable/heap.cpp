#include<iostream>
using namespace std;

int getSum(int *arr ,int n)
{
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    // static memory allocation --> stack memory
    // dynamic memory allocation --> heap memory    ex-> new char;   return address


    char ch = 'a';
    cout << sizeof(ch) << endl;

    char *c = &ch;
    cout << sizeof(c) << endl;


    //char * p = new char;

    // int *i = new int;
    // delete i;

    //int* arr = new int[5];
    //delete []arr;


    int n;
    cout << "enter the range" << endl;
    cin >> n;

    // variable size array
    // multiple int type ke block lane
    int* arr = new int[n];

    cout << "enter the elements" << endl;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr,n);

    cout << "answer is " << ans << endl;
}