#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(int N, const vector<int>& arr) {
    long long expectedSum = (long long)N * (N + 1) / 2;
    long long actualSum = 0;
    for (int num : arr) 
        actualSum += num;
    return expectedSum - actualSum;
}


int main() {
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8};
    cout << "Missing number = " << findMissingNumber(8, arr) << "\n";
    return 0;
}