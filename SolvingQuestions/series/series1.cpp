#include <iostream>
#include <vector>
using namespace std;

void printSeries1(int n) {
    // if (n <= 0) return;
    // vector<long long> series(n);
    // if (n >= 1) series[0] = 2;
    // if (n >= 2) series[1] = 3;
    // if (n >= 3) series[2] = 5;

    vector<long long> series(n);
    series[0] = 2;
    series[1] = 3;
    series[2] = 5;

    for (int i = 3; i < n; i++) {
        series[i] = series[i - 1] + series[i - 2] + series[i - 3];
    }

    for (int i = 0; i < n; i++) {
        //cout << series[i] << " ";
        cout << series[i] << (i == n - 1 ? "" : ", ");
    }

    cout << endl;
}

int main() {
    int N = 7;
    // [cite: 1]
    printSeries1(N);
    return 0;
}