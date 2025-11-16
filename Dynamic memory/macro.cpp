#include <iostream>
using namespace std;

// before compilation replace value by macro value (everywhere pi=3.14)
// no storage use , no change
// macro
#define PI 3.14

int main()
{
    int r = 3;
    //double pi = 3.14;

    // no change occur
    //PI = PI +1;

    double area = PI * r * r;
    cout << area << endl;
}