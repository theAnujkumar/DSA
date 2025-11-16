#include<iostream>
using namespace std;

class Circle{

    public:
        int r;

        Circle()
        {
            cout << "enter the radius" << endl;
            cin>>r;
        }

    public:
    void displayData()
    {
        cout << "radius is" << r << endl;
        cout << "area is" << CalculateArea(6) << endl;
        cout << "area is" << calculatePerimeter << endl;
    }

    public:
    int CalculateArea(int r)
    {
        float ar = 3.14*r*r;
        return ar;
    }
    int calculatePerimeter()
    {
        float ans = 2*3.14*r;
        return ans;
    }

};


int main()
{
    Circle c1;
    cout << "area is" << c1.CalculateArea(5) << endl;
    cout << "area is" << c1.calculatePerimeter() << endl;
    c1.displayData();
    return 0;
}