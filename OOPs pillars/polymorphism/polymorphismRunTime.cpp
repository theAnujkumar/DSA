#include<iostream>
using namespace std;

class Animal
{
    public:
        void speak()
        {
            cout << "animal speaking" << endl;
        }
};

class Dog: public Animal
{
    public:
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{
    Dog d1;
    d1.speak();
                    // OR
    // Dog *d1 = new Dog;
    // d1->speak();

    Animal *d2 = new Dog;
    d2->speak();
    // it would call parent/animal

    // we want to change their implementation
    
    return 0;
}