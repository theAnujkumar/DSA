#include<iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    cout << "the result is " << a+b;
    cout << "\nthe result is " << a/b;

    bool first = (a==b);
    cout << "\n" << first;

    bool second = (a>b);
    cout << "\n" << second;

    cout << "\n" ;
    int z = 10;
    cout << "z = " << z;
    cout << "z = " << z++;
    cout << "z = " << z;

    cout << "z = " << ++z;
    cout << "z = " << z;

    int t = 10;
    cout << "\n" ;
    cout << "t = " << t;
    cout << "t1 = " << ++t + ++t;
    //                 11 and 12  =  12 and 12 = 24

}