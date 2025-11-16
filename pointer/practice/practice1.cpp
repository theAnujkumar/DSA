#include <iostream>
using namespace std;

int main()
{
    int j=3;
    int *t = &j;

    *t = *t + 1;

    cout << *t << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;

    int s = 10;
    int *s1 = &s;

    cout << "before add " << s1 << endl;
    s1++;
    cout << "after add " << s1 << endl;

    // char temp = 'z';
    // char *p = &temp;

    // cout << p <<endl;
    // cout << *p <<endl;

    // arr[i] = *(arr + i);

//     int first = 6;
//    int *p = &first; 
//    int *q = p;

//    (*q)++;
//    cout << first << endl;
//    cout << (*p)++ << endl;
//    cout << first << endl;

   int v = 5;
   int *u = &v;
   cout << (*u)++ << endl;
   cout << *u << endl;

//     int *p2 = 0;
//    int third = 100;
//    *p2 = third;         // not print 

//    //*p2 = &third;

//    //p2 = &third;
//    cout << *p2 << endl;

   cout << endl;

   int arr[] = {11,21,31,41};

   
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;

    cout << first << " " << second << endl;

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


    char ch[7]  = "abcdef";
    cout << ch << endl;

    char *c = &ch[0];
    cout << *c << endl;
    cout << c << endl;

    char temp = 't';
    char *h = &temp;

    cout << h << endl;
    cout << *h << endl;

    return 0;


}
