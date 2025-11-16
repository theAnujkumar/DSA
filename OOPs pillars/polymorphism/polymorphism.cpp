#include<iostream>
using namespace std;

// compile time -> static polymorphism

class A {

    // method overloading with different type of argument
    public:
        void sayHello()
        {
            cout << "hello sher" << endl;
        }

        int sayHello(char name)
        {
            cout << "hello chette :-> " << name << endl;
            return 1;
        }

        void sayHello(string name)
        {
            cout << "hello sher :-> " << name << endl;
        }
        
};


class B {

    // method overloading with same type of argument but number different  
    public:
        int add(int a, int b)
        {
            return a+b;
        }
        
        int add(int a, int b , int c)
        {
            return a+b+c;
        }
        
};

int main()
{
    A obj1;
    obj1.sayHello();
    obj1.sayHello("jai ho");

    B obj2;
    cout << obj2.add(2,3) << endl;
    cout << obj2.add(3,4,6) << endl;

}

// many forms
// input argument should be change either data type or no. of argument
// method overloading with same type of argument but no. different  
// like int add(int a,int b) and int add(int a,int b,int c)
// with different type of argument like int add(int a,int b)  and float add(float a,float b)
