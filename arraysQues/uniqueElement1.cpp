#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

unordered_set<int> findUnique(const vector<int>& arr) {
    unordered_map<int,int> freq;   // element -> count

    // 1st pass: frequency count
    for (int num : arr) {
        freq[num]++;
    }

    // 2nd pass: collect only those with freq==1 into a set
    unordered_set<int> uniqueElements;
    for (auto &p : freq) {
        if (p.second == 1) {
            uniqueElements.insert(p.first);
        }
    }

    return uniqueElements;
}

int main() {
    vector<int> arr = {1,2,2,3,4,4,5};
    unordered_set<int> unique = findUnique(arr);

    cout << "Unique elements: ";
    for (int x : unique) cout << x << " ";  // order not guaranteed (unordered_set)
    return 0;
}
