#include<iostream>
#include<string.h>
using namespace std;

// make a class

class hero {
     
    // properties

    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    // make simple constructor
    // default constructor dead
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
    hero(hero &temp)
    {
        cout << "copy constructor call " << endl;
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

    // static function
    static int random()
    {
       return timeToComplete ;
        //cout << this -> health << endl;  not excess 
        //cout << level ;  not a static member
    }

    // destructor
    ~hero()
    {
        cout << "destructor call" << endl;
    }
};

// initialize

int hero::timeToComplete = 5;

int main()
{
    cout << hero::random() << endl;
    // not need object create
    cout << hero::timeToComplete << endl;
}