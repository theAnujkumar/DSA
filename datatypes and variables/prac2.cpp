#include<iostream>

using namespace std;

int main() {
    int third[15] = {2,7};

    int n = 15;
    //printArray(third, 15);
    int s1 = sizeof(third);
    int s2 = sizeof(int);
    
    cout << "size of third " << s1 << endl;
    cout << "size of int " << s2 << endl;

    int thirdSize = sizeof(third)/sizeof(int);
    cout<<" Size of Third is " << thirdSize <<endl;
}
