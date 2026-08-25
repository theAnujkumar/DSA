#include<iostream>
using namespace std;

class Animal
{
    public:
        virtual void speak()
        {
            cout << "speaking" << endl;
        }
};

class Dog: public Animal
{
    public:
    void speak() override
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
    // it would not call parent/animal
    // it would call itself using virtual override

    
    return 0;
}