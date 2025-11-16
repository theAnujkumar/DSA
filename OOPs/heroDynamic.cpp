#include<iostream>
using namespace std;

                        // class 2

// make a class

class hero {
     
    // properties

    private:
    int health;

    public:
    char level;

    void print()
    {
        cout << level << endl;
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

    // creation of object
    // stack me static
    hero h1;

    h1.setHealth(60);
    h1.setLevel('A');

    cout << "health is " << h1.getHealth() << endl;
    cout << "level is " << h1.level << endl;

    // dynamic allocation
    // heap me
    // so h2 is address and *h2 will be pointer 
    hero *h2 = new hero;

    h2->setHealth(80);
    h2->level = 'B';

    cout << "health is " << (*h2).getHealth() << endl;
    cout << "health is " << h2->getHealth() << endl;
    cout << "level is " << (*h2).level << endl;    

    cout << "health is " << h2->getHealth() << endl;
    cout << "level is " << h2->level << endl;

    // // use setter
    // h1.setHealth(60);
    // //h1.health = 60;
    // h1.level = 'A';

    // cout << sizeof(h1) << endl;
    // cout << "health is " << h1.getHealth() << endl;
    // cout << "level is " << h1.level << endl;

    // size of h2 is 4

}