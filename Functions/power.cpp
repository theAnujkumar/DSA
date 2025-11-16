#include<iostream>
using namespace std;

int power(int , int);

main() {

    int b,p;

    cout << "enter the value of base and power\n";
    cin >> b >> p ;

    int answer = power(b,p);
    cout << "\npower of " << b << "is " << answer;
}

int power (int b , int p) {

    int ans = 1;

    for(int i=1 ; i<=p ; i++) {
        ans = ans * b;
    }
    return ans ;
}