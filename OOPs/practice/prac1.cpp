#include<iostream>
#include<string.h>
using namespace std;

// class Circle{
//     public:
//         int radius;

//     Circle()
//     {
//         cout << "enter the radius" << endl;
//         cin >> radius;
//     }

//     int calculateArea()
//     {
//         int ar = 3.14 *radius*radius;
//         return ar;
//     }
// };

// int main()
// {
//     Circle c1;
//     cout << c1.calculateArea();
// }


class hero{
    private:
        int health;

    public:
        char level;
        char* name;
        static int timeToComplete;

    hero()
    {
        cout << "constructor call" << endl;
        name = new char[10];
    }

    hero(int h)
    {
        this->health = h;
    }

    hero(hero &temp)
    {
        // deep copy constructor call
        cout << "deep copy constructor call " << endl;
        char *ch = new char [strlen(temp.name) + 1];
        strcpy(ch,temp.name);

        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        //cout << "health is " << health << endl;
        cout << "Name: "  << this -> name << " "; 
        cout << "health is: " << this -> health << " ";
        cout << "level is: " << this -> level << endl;
        //cout << "level is " << level << endl;
    }

    void setHealth(int h)
    {
        health = h;
    }
    int getHealth()
    {
        return health;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    static int random()
    {
        return timeToComplete;
        // cout << this -> health << endl;  //not excess 
        // cout << level ;  //not a static member
    }
    
};

int hero::timeToComplete = 5;

int main()
{
    hero h1;
    h1.level = 'f';
    cout << "level is" << h1.level << endl;
    h1.setHealth(80);
    cout << "level is" << h1.getHealth() << endl;

    hero *h2 = new hero(5);
    h2->getHealth();
    (*h2).level;

    char name[7] = "babbar";

    h2->setHealth('r');
    cout << "size of h1 is " << sizeof(h1) << endl;
    cout << "size of h2 is " << sizeof(h2) << endl;

    hero h3(6);

    hero sher1;
    sher1.setName(name);

    hero sher2(sher1);
    sher1.name[0] = 'G';

    sher1.print();
    sher2.print();

    sher1 = sher2;
     sher1.print();
    sher2.print();

    hero::timeToComplete;
    hero::random;
   
}