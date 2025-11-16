#include<iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p)
{
    p = p + 1;
    cout << "inside " << p << endl;

    //*p = *p + 2;
}


int main()
{
    int value = 5;
    int *p = &value;

    print(p);

    cout << "value before update " << value << endl;
    cout << "adress before update " << &value << endl;
    cout << "adress before update " << p << endl;
    cout << "value before update " << *p << endl;
    cout << endl;
    update(p);
    cout << "value after update " << value << endl;
    cout << "adress after update " << &value << endl;
    cout << "adress after update " << p << endl;
    cout << "value after update " << *p << endl;

    return 0;
}