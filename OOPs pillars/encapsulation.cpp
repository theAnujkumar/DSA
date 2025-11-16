#include<iostream>
using namespace std;

class Student{

    private:
    int age;
    string name;
    int height;

    public:
    int getAge()
    {
        return this->age;
    }
    int setAge(int age)
    {
        this->age = age;
    }
};

int main()
{
    Student s1;
    s1.setAge(5);
    cout << s1.getAge();

    return 0;
}