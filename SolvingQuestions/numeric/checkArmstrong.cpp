#include <iostream>
using namespace std;

void checkArmstrong(int num) {
    int temp = num, sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += (digit * digit * digit);
        temp /= 10;
    }
    if (sum == num) cout << num << " -> Armstrong Number\n";
    else cout << num << " -> Not an Armstrong Number\n";
}


int main() {
    int tests[] = {153, 370, 371, 407, 125};
    for (int num : tests) 
        checkArmstrong(num);
    return 0;
}