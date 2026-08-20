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
        int getAge()
        {
            return age;
        }
        string setAge(int age)
        {
            this->age = age;
        }

};

class Dog: public Animal{
     public:
        string breed;

    public:
        void sound()
        {
            cout << "dog bark" << endl;
        }
};

int main()
{
    Dog d1 ;
    d1.speak();

    d1.setAge(5);
    cout << "animal age is " << d1.getAge() << endl;
    cout << "animal age is " << d1.age << endl;

    return 0;
}