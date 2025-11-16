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
