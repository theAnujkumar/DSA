#include<iostream>
using namespace std;

class Human{

    private:
        string name;

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

    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    

};

class Male: public Human
{
    public:
    string color;

    void sleep(){
        cout << "male is sleeping";
    }
};

class Female : public Human
{
    public:
        string color = "blue";
    
    void sleep(){
        cout << "female is sleeping " << endl;
    }
};


int main()
{
    // child class can access of properties of their parent class
    Male obj1;
    Female f1;

    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    cout << obj1.color << endl;
    obj1.sleep() ;

    obj1.setWeight(40);
    cout << obj1.weight << endl;

    f1.sleep();
    f1.setWeight(50);
    cout << f1.weight << endl;

    // here child class access and modify of properties of their parent class
    f1.setName("hero");
    cout << f1.getName() << endl;

    return 0;
}