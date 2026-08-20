#include<iostream>
using namespace std;


// encapusation  -> wrapping up data members and function in single entity
class Student{

    private:
    int age;
    string name;
    float height;

    public:
    int getAge()
    {
        return this->age;
    }
    int setAge(int age)
    {
        this->age = age;
    }
    float getheight()
    {
        return this->height;
    }
    void setHeight(float height)
    {
        this->height = height;
    }
};

int main()
{
    Student s1;
    s1.setAge(5);
    cout << s1.getAge() << endl;

    s1.setHeight(5.7);
    cout << s1.getheight() << endl;

    return 0;
}