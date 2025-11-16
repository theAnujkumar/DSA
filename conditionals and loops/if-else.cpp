#include<iostream>
using namespace std;

int main () {

    cout << "enter the value";

    int c = cin.get();

    cout << "\nthe value of c is " << c;
    
    int a = 6;
    //cin >> a;

    cout << "\nthe value of a is " << a ;

    if(a>0) 
    {
        cout << "\na is greater";
    }

    else {
        cout << "\na is smaller";
    }
}

