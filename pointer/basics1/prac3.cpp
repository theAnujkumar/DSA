#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,3,7,4,5};
    char ch[6] = "abcde";

    // print address
    cout << arr << endl;

    // print string
    cout << ch << endl;

    char *c = &ch[0];

    // print entire string
    cout << c << endl;
    
    cout << *c << endl;

    // not do such things
    char temp = 'z';
    char *p = &temp;

    cout << p <<endl;
    cout << *p <<endl;

    // arr[i] = *(arr + i);

    char cha[4] = "abc";
    char *cha1 = &cha[0];

    cout << "cha is " << cha << endl;

    cout << "cha address is " << &cha << endl;
    //cout << "cha1 address is " << &cha1 << endl;
    cout << "cha is " << cha1 << endl;

    char t1 = 'g';
    char *p1 = &t1;
    cout << "p1 address is " << &p1 << endl;
    cout << "t1 address is " << &t1 << endl;     // it does not give address 
    cout << "p1 is " << p1 << endl;               // it does not give address 
    cout << "p1 is " << *p1 << endl;
    


}