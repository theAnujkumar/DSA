#include<iostream>
using namespace std;


class A{
    public :
        void fun1()
        {
            cout << "this is fun1" << endl;
        }
};

class B : public A{
    public :
        void fun2()
        {
            cout << "this is fun2" << endl;
        }
};

int main()
{
    B obj1;
    obj1.fun1();
    obj1.fun2();
}