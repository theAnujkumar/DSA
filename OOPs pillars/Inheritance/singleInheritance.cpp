#include<iostream>
using namespace std;

class Animal{

    public:
        int age;
        int weight;

    public:
        void speak()
        {
            cout << "animal speak" << endl;
        }

};

class Dog: public Animal{

};

int main()
{
    Dog d1 ;
    d1.speak();
    cout << "animal age is " << d1.age << endl;

    return 0;
}