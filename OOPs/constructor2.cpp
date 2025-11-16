#include<iostream>
#include<string.h>
using namespace std;

// make a class

                        // class 4

class hero {
     
    // properties

    private:
    int health;

    public:
    char *name;
    char level;

    // make simple constructor
    // default constructor dead
    // shallow copy constructor call
    hero()
    {
        cout << "constructor call" << endl;
        name = new char[100];
    }

    // parameterised constructor
    hero(int health)
    {
        cout << "this" << this << endl;
        this -> health = health;
    }

     hero(int health , char level)
    {
        this -> level = level;
        this -> health = health;
    }

    // copy constructor call
    // pass by refernce to overcome infinte loop
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

    void setName(char name[])
    {
        strcpy(this->name,name);
    }
};

int main()
{
    
    hero sher1;
    sher1.setHealth(10);
    sher1.setLevel('A');
    char name[7] = "babbar";
    sher1.setName(name);

    //sher1.print();

    // use copy default constructor  = shallow copy
    // shallow copy -> same menory access
    hero sher2(sher1);
    //hero sher2 = sher1;

    sher1.name[0] = 'G';

    sher1.print();
    sher2.print();

    // assigned operator
    sher1 = sher2;
    // sher1.health = sher2.health

    sher1.print();
    sher2.print();

}