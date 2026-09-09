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


    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;

    // cout << first << " " << second << endl;


    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;

    cout << *r << " " << *q << " " << *p << " " << **q << endl;
    ++(*r);
    cout << *r << " " << *q << " " << *p << " " << **q << endl;

    // *p = &first;
    //  and *r = *q  and **q = &p  here q point to p so r,p value change
    cout << first << " " << second << endl;
    
}