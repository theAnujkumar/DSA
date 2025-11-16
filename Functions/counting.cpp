#include <iostream>
using namespace std;

void counting (int n) {
    for(int i=1 ; i<=n ; i++) {
        cout <<"\n" << i;
    }
}

main () {
    int n;
    cout << "\nenter the value";
    cin >> n;

    counting(n);
    //return 0;
}