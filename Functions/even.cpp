#include<iostream>
using namespace std;

// a gives 10 even
// 1 gives 01 odd

bool isEven(int a) {

    // end 1 true
    if (a & 1) {
        return 0;
        // odd
    }

    else 
        return 1;

}

int main() {

    int n ;
    cout << "enter the number wanted to check even or not";
    cin >> n;

    if(isEven(n)) {
        cout << "\neven no.";
    }

    else
    {
        cout << "\nodd no.";
    }
}

