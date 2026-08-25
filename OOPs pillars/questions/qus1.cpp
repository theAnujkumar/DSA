#include<iostream>
using namespace std;

class A {
    public:
        A()
        {
            cout << "this is A" << endl;
        }
};

class B : public A {
    public :
        B() {
            cout << "this is B" << endl;
        }
};

class C : public B {
    public :
        C() {
            cout << "this is C" << endl;
        }
};

int main()
{
    B obj;
    C obj1;
    A a1;
    A *a2 = new A;
    
    return 0;
}

// constructor
/*
    parent 
    subChild 
    child
*/

/*
o/p
this is A
this is B
*/