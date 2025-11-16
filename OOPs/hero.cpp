#include<iostream>
using namespace std;

                        /// class 1

// make a class
// class = user defined data type , template , blueprint 
//         that contain properties/state and behaviour/function

class hero {
     
    // properties

    // access modifier :- public , private , protected where we can access
    private:        // access modifier
    int health;

    public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    // getter
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    // setter
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
    // object = instance of class
    hero h1;

    // use getter
    cout << "health is " << h1.getHealth() << endl;

    // use setter
    h1.setHealth(60);
    //h1.health = 60;

    // due to public access modifier we don't need to getter and setter function
    h1.level = 'A';

    cout << sizeof(h1) << endl;
    cout << "health is " << h1.getHealth() << endl;
    //cout << "health is " << h1.health << endl;
    cout << "level is " << h1.getLevel() << endl;
    cout << "level is " << h1.level << endl;

}

// greedy alignment 
// padding