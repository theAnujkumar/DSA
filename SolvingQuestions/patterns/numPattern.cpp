#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> series = {2, 3, 5, 10, 18, 31, 51, 80};
    for (int i = 0; i < N && i < series.size(); i++) {
        cout << series[i] << " ";
    }
    return 0;
}