#include <iostream>
using namespace std;
int main() {
    int N = 5;

    // Forward Pattern
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 1; j <= i; j++) cout << j;
    //     cout << "\n";
    // }
    for(int i=1 ; i<=N ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    // Reverse Pattern
    for(int i=N ; i>=1 ; i--)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    // for (int i = N; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) cout << j;
    //     cout << "\n";
    // }
    return 0;
}