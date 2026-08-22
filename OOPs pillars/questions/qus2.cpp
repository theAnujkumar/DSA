#include<iostream>
using namespace std;

class A {
    public:
        void fun()
        {
            cout << "this is A" << endl;
        }
        void enjoy()
        {
            cout << "enjoy A" << endl;
        }
};

class B : public A {
    public :
        void fun(int x) {
            cout << "this is B" << endl;
        }
};

class C : public A {
    public :
        void fun() {
            cout << "this is C" << endl;
        }
};

int main()
{
    B obj;
    obj.fun(4);

    B b1;
    b1.enjoy();
    // it give error
    // b1.fun();

    C c1;
    c1.fun();
    c1.enjoy();

    // A a1;
    // A *a2 = new A;
    
    return 0;
}
