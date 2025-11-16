#include<iostream>
using namespace std;

int main() {

    /*
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;

    cout << first << " " << second << endl;

    // ans 8 9

    

   int first = 6;
   int *p = &first; 
   int *q = p;

   (*q)++;
   cout << first << endl;
   cout << (*p)++ << endl;
   cout << first << endl;

   int *p2 = 0;
   int third = 100;
   *p2 = third;         // not print 
   //p2 = &third;
   cout << *p2 << endl;

    */

    // qus 4

    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;

    cout << first << " " << second << endl;

    // qus = 5

    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;

    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;

    // qus = 6

    int arr[5];
    int *ptr2 ;
    cout << sizeof(arr) << " " << sizeof(*ptr2);
}