#include <iostream>
#include <vector>
using namespace std;
void moveZeros(vector<int>& arr) {
    int writeIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) 
            {
                //arr[writeIndex++] = arr[i];
                swap(arr[i],arr[writeIndex]);
                writeIndex++;
            }
    }
    while (writeIndex < arr.size()) 
        arr[writeIndex++] = 0;
}

int main() {
    vector<int> arr = {0, 8, 0, 4, 15, 0, 6, 2};
    moveZeros(arr);
    for (int num : arr) cout << num << " ";
    cout << "\n";
    return 0;
}

// move zeros to end