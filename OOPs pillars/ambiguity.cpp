#include<iostream>
using namespace std;

class A {

    public:
        void func()
        {
            cout << "this is A" << endl;
        }
};

class B {

    public:
        void func()
        {
            cout << "this is B" << endl;
        }
};

class C: public A , public B {
    public:
        void func()
        {
            cout << "this is C" << endl;
        }
};



int main()
{
    C obj1;

    //obj1.func();
    // scope resolution operator
    obj1.A::func();

    obj1.B::func();
    
    obj1.func();
    
    return 0;
}