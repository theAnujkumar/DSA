#include<iostream>
using namespace std;

class hero{
    private:
        int health;

    public:
        int age;
        string name;

    void print()
    {
        cout << "name is " << name << endl;
    }
    void setHealth(int h)
    {
        health = h;
    }
    int getHealth()
    {
        return health;
    }
};

class Hero{

};

int main()
{
    hero h1;
    Hero h2;
    cout << "size is " << sizeof(h1) << endl; 
    cout << "size is " << sizeof(h2) << endl; 

    //cout << "health is " << h1.health << endl;
    h1.setHealth(3);
    cout << "health is " << h1.getHealth() << endl;

    h1.age = 10;
    cout << "age is " << h1.age << endl;
    h1.name = "sher";

    h1.print();

    hero *h3 = new hero;
    cout << "size is " << sizeof(h3) << endl; 

    h3->setHealth(5);
    cout << "health is " << h3->getHealth() << endl;
    cout << "health is " << (*h3).getHealth() << endl;
    cout << "size is " << sizeof(h3) << endl; 

    return 0;
}