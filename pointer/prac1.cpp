#include<iostream>
using namespace std;

int main()
{
    int num = 2;
    int *p = &num;

    cout << num;

    // address of operator --> &
    // deReference address -> *
    // store address
    // pointer takes 8 bites
    cout << "\naddress of num is = " << &num;
    cout << "\naddress of p is = " << p;
    cout << "\nvalue of p is = " << *p;

    cout << "\nsize of integer is " << sizeof(num);
    cout << "\nsize of pointer is " << sizeof(p);


    int num1 = 5;
    int *p1 = 0;
    p1 = &num1;

    cout << "\nvalue of p is = " << *p1;

    int num2 = 4;
    int a = num2;
    cout << "\nbefore num = " << num2;
    a++;
    cout << "\nafter num = " << num2;
    // no change in num2 value
    

    int *p2 = &num2;
    cout << "\nbefore num2 = " << num2 << endl;
    
    (*p2)++;

    cout << "\nafter num2 = " << num2 << endl;
    // get change in num2 value due to pointer

    // copying pointer
    int *q = p2;
    cout << p2 << "--" << q << endl;
    cout << *p2 << "--" << *q << endl;

    // important concept
    int j=3;
    int *t = &j;

    cout << *t << endl;

    *t = *t + 1;

    cout << *t << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;
    // change the address move to next integer value


    // practice qus by myself
    int k = 10;
    int *g = &k;
    int *f = g;

    cout << "value of f is " << *f << endl;
    //(*f)++;
    
    cout << "value of f is " << ++(*f) << endl;
    cout << "value of f is " << (*f)++ << endl;

    cout << "value of k is " << k << endl;
    cout << "value of g is " << *g << endl;
    cout << "value of f is " << *f << endl;
}