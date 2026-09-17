#include <iostream>
#include <string>
#include <vector>
using namespace std;
string intToRoman(int num) {
    vector<pair<int, string>> romanMap = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
        {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"}, {1, "I"}
    };
    string result = "";
    for (const auto& pair : romanMap) {
        while (num >= pair.first) {
            result += pair.second;
            num -= pair.first;
        }
    }
    return result;
}
int main() {
    cout << "1987 -> " << intToRoman(1987) << "\n";
    cout << "64 -> " << intToRoman(64) << "\n";
    cout << "3826 -> " << intToRoman(3826) << "\n";
    return 0;
}

/*
Dry Run for 1987:
• 
• 

1987 ≥ 1000 → Append M, num = 987
987 ≥ 900 → Append CM, num = 87
87 ≥ 50 → Append L, num = 37
37 ≥ 30 → Append XXX, num = 7
7 ≥ 5 → Append V, num = 2
2 ≥ 2 → Append II, num = 0
Final Result: MCMLXXXVII
Limitation: Standard Roman numeral syntax supports numbers up to 3999. Numbers ≥ 4000 require overline
notation (e.g., V̄).
*/

/*
Time Complexity: $O(1)$ — Kyunki Roman numbers fixed hote hain
 (max 3999 tak standard input hota hai) aur loop maximum ek fixed 
 constant times hi chalta hai.Space Complexity: $O(1)$ — Vector ka size
  fix (13 elements) hai.
*/