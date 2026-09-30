// *    *
//  *  *
//    * 
//  *  *
// *    *

#include <iostream>
using namespace std;

void printXPattern(int n) {
    for (int i = 0; i < n; i++) {         // Loop through rows
        for (int j = 0; j < n; j++) {     // Loop through columns
            // Print star on main diagonal or anti-diagonal
            if (i == j || i + j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after completing a row
    }
}

int main() {
    int N = 5;
    printXPattern(N);
    return 0;
}

/*
Row 0:  *       *   (Columns 0 and 4)
Row 1:    *   *     (Columns 1 and 3)
Row 2:      *       (Column 2)
Row 3:    *   *     (Columns 1 and 3)
Row 4:  *       *   (Columns 0 and 4)

Main Diagonal (top-left to bottom-right): Row index equals column index (i == j).
Anti-Diagonal (top-right to bottom-left): Row index plus column index equals n - 1
  i + j == n - 1.
*/