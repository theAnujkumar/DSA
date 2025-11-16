// object creation time invock
// ramesh.hero

#include<iostream>
using namespace std;

                        // class 3

// make a class
// used to initialize object of class 
// invoke at object creation time
// no return type no input parameter

class hero {
     
    // properties

    private:
    int health;

    public:
    char level;

    // make constructor
    // default constructor dead
    hero()
    {
        cout << "constructor call" << endl;
    }

    // parameterised constructor
    // this keyword refer to current object
    // stores the address of current object
    hero(int health)
    {
        cout << "this " << this << endl;
        this -> health = health;
    }

    hero(int health , char level)
    {
        this -> level = level;
        this -> health = health;
    }

    // copy constructor call
    hero(hero &temp)
    {
        cout << "copy constructor call " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout <<"level is " << level << endl;
        cout <<"health is " << health << endl;
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    cout << "hi" << endl;
    // creation of object
    // hero constructor will be call
    hero ramesh;
    cout << "hello" << endl;

    hero *raju = new hero();


    // creation of object
    hero sher(20);
    sher.print();

    cout << "address is " << &sher << endl;

    hero *h1 = new hero(30);
    h1->print();

    hero temp(10,'G');
    temp.print();
    //cout << "hello" << endl;

}