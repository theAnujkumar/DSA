#include<iostream>
using namespace std;

// make a class

class hero {
     
    // properties
    // access modifier :- public , private , protected where we can access

    public:
    int health;
    char level;

};

class sher{
    
    private:
    int age;

    public:
    string name;

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

};


int main()
{

    // creation of object
    hero h1;
    sher s1;

    // dynamically
    // sher *s3 = new sher;

    h1.health = 60;
    h1.level = 'A';

    s1.name = "shiro";
    s1.setAge(5);
    //s1.age = 10;

    cout << sizeof(h1) << endl;
    // in case of empty class size will be 1 byte for identification or track
    cout << sizeof(s1) << endl;
    cout << "health is " << h1.health << endl;
    cout << "level is " << h1.level << endl;

    cout << "name is " << s1.name << endl;
    cout << "age is " << s1.getAge() << endl;

}