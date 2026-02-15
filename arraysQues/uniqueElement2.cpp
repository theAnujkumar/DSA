#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findUnique(vector<int> &arr) {
    unordered_map<int,int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    vector<int> uniqueElements;
    for (int num : arr) {
        if (freq[num] == 1)
            uniqueElements.push_back(num);
    }

    return uniqueElements;
}

int main() {
    vector<int> arr = {1,2,2,3,4,4,5};
    vector<int> unique = findUnique(arr);

    for (int x : unique) 
        cout << x << " ";
}
// ans = 1,3,5

/*
| Version                 | Loop on?               | Kyu use kiya?                                                               | Output order                 |
| ----------------------- | ---------------------- | --------------------------------------------------------------------------- | ---------------------------- |
| **1st (unordered_set)** | `for (auto &p : freq)` | Map ke **unique keys** par loop, fast, direct                               | Order **random** (unordered) |
| **2nd (vector result)** | `for (int num : arr)`  | Jo elements original array me jis order me the, usi order me unique nikalna | Order **same as input**      |

*/
