#include<iostream>
using namespace std;

void update(int *p)
{
    *p = (*p) * 2;
}

int main()
{
    int i = 10;
    update(&i);
    cout << i << endl;

/*
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;

    cout << first << " " << second << endl;
*/

    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);

    cout << first << " " << second << endl;
    
}