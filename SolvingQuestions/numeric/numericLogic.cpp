#include <iostream>
using namespace std;

int getDigitSum(int n) {
    int sum = 0;
    // while (n > 0) {
    //     sum += n % 10;
    //     n /= 10;
    // }
    while(n)
    {
        int val = n%10;
        sum += val;
        n = n/10;
    }
    return sum;
}
int main() {
    int count = 0;
    cout << "Numbers: ";
    for (int i = 1; i <= 350; i++) {
        if (getDigitSum(i) % 5 == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal count = " << count << "\n";
    return 0;
}