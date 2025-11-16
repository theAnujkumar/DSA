#include<iostream>
#include<string.h>
using namespace std;

// make a class

class Example {
    char c;
    int i;
    short s;
};

class MyClass {
    public:
    // static keyword
        int getValue() const {
            // Cannot modify any member variables within this function
            return this->value;
        }
    private:
        int value = 10;
    };


int main() {

    Example e1;
    MyClass m1;

    cout << "size of example is " << sizeof(e1) << endl;
    cout << "size of myclass is " << sizeof(m1) << endl;
    cout << "value of myclass is " << m1.getValue() << endl;
    return 0;
}

/*
Padding is the technique of adding extra bytes to a structure or class
 to align its data members to specific boundaries. This is done to ensure
  that the data members are accessed efficiently by the processor, which typically
 fetches data from memory in chunks of fixed sizes, such as 4 or 8 bytes.
*/