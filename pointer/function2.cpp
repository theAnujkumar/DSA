#include<iostream>
using namespace std;

void update(int **p1)
{
    //p1 = p1 + 1;      // no change

    // change --> yes  p ka address 
    *p1 = *p1 + 2;

    // change --> yes  i ki value 
    **p1 = **p1 + 2;
}

int main()
{
    int i = 6;
    int *p = &i;
    int **p1 = &p;

    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p1 << endl;

    update(p1);

    cout << "after" << i << endl;
    cout << "after" << p << endl;
    cout << "after" << p1 << endl;
}