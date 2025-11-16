#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge()
    {
        return age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }

};

class Male: public Human
{
    public:
    string color;

    void sleep(){
        cout << "this is sleeping";
    }
};

int main()
{
    
    Male obj1;

    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    cout << obj1.color << endl;
    obj1.sleep() ;

    obj1.setWeight(40);
    cout << obj1.weight << endl;

    return 0;
}