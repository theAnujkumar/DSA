#include<iostream>
using namespace std;

int hammingWeight(int);

main () {
    int i=5;
    cout << " the value is :" << i;
    cout << "ans is " << hammingWeight(i);
}


int hammingWeight(int n) {
    
    int count = 0;
    while(n!=0) {
        
        //checking last bit
        if(n&1) {
            count++;
        }
        n = n>>1;
    }
    return count;
}