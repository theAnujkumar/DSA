#include<iostream>
using namespace std;

class hero{

    public:
    int age = 9;
    string name;

    int getAge()
    {
        return age;
    }
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};

class Rectangle{

    public:
        int l,b;

    Rectangle(int l,int b)
    {
        this->l = l;
        this->b = b;
    }

    public:
    void displayData()
    {
        cout << "length is" << l << endl;
        cout << "breadth is" << b << endl;
        cout << "area is" << CalculateArea(6,7) << endl;
    }

    public:
    int CalculateArea(int l,int b)
    {
        int ar = l*b;
        return ar;
    }

};


int main()
{
    hero h1;
    hero *h2 = new hero;
    cout << h1.getAge();
    h1.setName("sher");
    cout << h1.getName();

    Rectangle r1(5,6) ;
    Rectangle *r2 = new Rectangle(5,6);
    r1.displayData();
    cout << r1.CalculateArea(5,6);
    return 0;
}