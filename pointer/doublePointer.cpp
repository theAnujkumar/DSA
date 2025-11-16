#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

/*
    cout << "printing p or i address" << p << endl;
    cout << "address of p" << &p << endl;
    cout << "value " << *p << endl;
    cout << "value " << *p2 << endl;
*/

    cout << "value " << i << endl;
    cout << "value " << *p << endl;
    cout << "value " << **p2 << endl;

    cout << "address is " << p << endl;
    cout << "address is " << &i << endl;
    cout << "address is " << *p2 << endl;

    cout << "address is " << &p << endl;
    cout << "address is " << p2 << endl;


    return 0;
}