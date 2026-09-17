#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool isOneEditDistance(const string& s1, const string& s2) {

    int m = s1.length(), n = s2.length();

    if (abs(m - n) > 1) return false;

    int i = 0, j = 0, count = 0;

    while (i < m && j < n) {
        if (s1[i] != s2[j]) {
            if (count == 1) return false; // Pehle hi 1 edit mil chuka tha, ab 2nd mil gaya -> False
            if (m > n) i++;               // Deletion in s1 (s1 bada hai, isliye s1 ka pointer aage badhao)
            else if (m < n) j++;          // Insertion in s1 / Deletion in s2 (s2 bada hai, isliye s2 ka pointer aage badhao)
            else { i++; j++; }            // Replacement (dono equal length ke hain, isliye dono pointers aage badhao)
            count++;
        } else {
            i++; j++;                      // Characters match ho gaye, normal move
        }
    }
    
    if (i < m || j < n) count++;
    return count == 1;
}
int main() {
    cout << (isOneEditDistance("CAT", "CART") ? "Yes" : "No") << "\n";
    cout << (isOneEditDistance("APEX", "APEX") ? "Yes" : "No") << "\n";
    return 0;
}
