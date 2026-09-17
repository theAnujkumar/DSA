#include <iostream>
#include <string>
using namespace std;
void findFirstNonRepeating(const string& str) {
    int freq[256] = {0};
    for (char c : str) {
        freq[(unsigned char)c]++;
    }
    char firstChar = ' ';
    int firstPos = -1;
    for (int i = 0; i < str.length(); i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            firstChar = str[i];
            firstPos = i + 1; // 1-based index
            break;
        }
    }
    if (firstPos == -1) {
        cout << "Every character repeats.\n";
        return;
    }
    cout << "1. First non-repeating character: " << firstChar << "\n";
    cout << "2. Position: " << firstPos << "\n";
    cout << "3. All characters occurring once: ";
    for (int i = 0; i < str.length(); i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            cout << str[i] << " ";
        }
    }
    cout << "\n";
}
int main() {
    findFirstNonRepeating("PROGRAMMING");
    return 0;
}
