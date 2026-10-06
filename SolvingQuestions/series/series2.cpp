#include <iostream>
#include <vector>
using namespace std;

void printSeries1(int n) {
    int term = 1;
    int add = 1;

    for(int i=0 ; i<n ; i++)
    {
        cout << term << " ";
        term += add;
        add++;
    }
    cout << endl;
}

void printSeries2(int n) {
    int term = 1;
    for (int i = 1; i <= n; i++) {
        cout << term << (i == n ? "" : ", ");
        term += i;
    }
    cout << endl;
}

int main() {
    int N = 7;
    // [cite: 1]
    printSeries1(N);
    return 0;
}