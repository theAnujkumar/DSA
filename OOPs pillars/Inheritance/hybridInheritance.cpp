// more than 1 type of inheritance

#include<iostream>
using namespace std;

class A {

    public:
        void func1()
        {
            cout << "this is A" << endl;
        }
};

class B: public A {

    public:
        void func2()
        {
            cout << "this is B" << endl;
        }
};

class C: public A {

    public:
        void func3()
        {
            cout << "this is C" << endl;
        }
};

int main()
{
    
}