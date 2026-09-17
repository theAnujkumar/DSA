#include <iostream>
#include <vector>
using namespace std;

void findMostFrequent(const vector<int>& arr) {
    // Step 1: Maximum element dhoondo taaki array size decide ho sake
    int maxVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) maxVal = num;
    }

    // Step 2: Frequency array banao (Aapke arr[26] waale logic jaisa)
    vector<int> freq(maxVal + 1, 0);

    for (int num : arr) {
        freq[num]++; // Direct index mapping
    }

    // Step 3: Most frequent element dhoondo
    // Note: Array ki original order maintain karne ke liye hum input array par loop chalayenge
    int maxFreq = 0;
    int mostFrequent = arr[0];

    for (int num : arr) {
        if (freq[num] > maxFreq) {
            maxFreq = freq[num];
            mostFrequent = num;
        }
    }

    cout << "Most frequent element = " << mostFrequent << "\n";
    cout << "Frequency = " << maxFreq << "\n";
}


void findMostFrequent2(const vector<int>& arr) {
    int maxFreq = 0, mostFrequent = arr[0];
    for (size_t i = 0; i < arr.size(); i++) {
        int count = 0;
        for (size_t j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > maxFreq) {
            maxFreq = count;
            mostFrequent = arr[i];
        }
    }
    cout << "Most frequent element = " << mostFrequent << "\n";
    cout << "Frequency = " << maxFreq << "\n";
}

int main() {
    vector<int> arr = {4, 2, 4, 3, 2, 4, 5, 2};
    findMostFrequent(arr);
    findMostFrequent2(arr);

    return 0;
}