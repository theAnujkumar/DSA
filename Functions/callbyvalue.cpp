#include<iostream>
using namespace std;

void dummy(int n) {

    n++;
    cout << "n is " << n;

} 

main() {
    
    int n ;

    cout << "enter the number ";
    cin >> n;

    dummy(n);

    cout << "\nnumber is " << n;
}