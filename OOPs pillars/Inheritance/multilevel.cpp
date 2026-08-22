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
    public:
        string name[20];
    
        void bark()
        {
            cout << "dog bark" << endl;
        }
};

class bulldog: public Dog{
    public :
        void bark()
        {
            cout << "bulldog bark" << endl;
        }
};

int main()
{
    Dog d1 ;
    // here inherit property of their parent beacuse it have not speak function
    d1.speak();
    d1.bark();

    bulldog b1;
    b1.speak();
    b1.bark();

    d1.age = 6;
    cout << "animal age is " << d1.age << endl;
    
    return 0;
}

// a->b->c->d