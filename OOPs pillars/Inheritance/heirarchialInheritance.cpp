#include<iostream>
using namespace std;

class A {

    public:
        void func1()
        {
            cout << "this is A or parent class" << endl;
        }
};

class B: public A {

    public:
        void func2()
        {
            cout << "this is B derived from A" << endl;
        }
};

class C: public A {

    public:
        void func3()
        {
            cout << "this is C derived from A" << endl;
        }
};

class D: public B{
    public:
        void func4()
        {
            cout << "this is D derived from B" << endl;
        }
};

int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();

    D obj4;
    obj4.func1();
    obj4.func2();
    //obj4.func3();
    obj4.func4();

    return 0;
}