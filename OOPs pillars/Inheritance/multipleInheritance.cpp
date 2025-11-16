#include<iostream>
using namespace std;

class Animal{

    public:
        int age;
        int weight;

    public:
        void bark()
        {
            cout << "animal bark" << endl;
        }

};

class Human {

    public:
        string color;

    public:
        void speak()
        {
            cout << "human speak" << endl;
        }
};

// multiple inheritance
class hybrid: public Animal , public Human{
    public:
        void speakHybird()
        {
            cout << "this is hybrid speaking" << endl;
        }
};


int main()
{
    hybrid h1;
    // here hybrid gives priority its function firstly ex- takes speak() function in both 
    // human and hybrid
    
    h1.bark();
    h1.speak();
    h1.speakHybird();
    
    return 0;
}
