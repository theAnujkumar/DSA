#include<iostream>
using namespace std;

class Rectangle {
    //member variable
	private:
        float length,breadth;

    public:
	//paramterized Constructor
	Rectangle(float l,float b)
	{
		length = l;//initializing length
		breadth = b; //initializing breadth
    }

    void dispalayData()
    {
        cout << "length is " << length << endl;
        cout << "breadth is " << breadth << endl;
    }

    //method for calculating area
	void calculateArea()
	{
		float area = length * breadth;
		cout << "area is " << area << endl;
	}
	//method for calculating perimeter
	void calculatePerimeter()
	{
		float perimeter = 2 * (length + breadth);		
		cout << "perimeter is " << perimeter << endl;
	}
};

int main()
{
    //Rectangle *r1 = new Rectangle(4.513,9.876);
    Rectangle r1(2,4);
    r1.dispalayData();
    r1.calculateArea();

    return 0;
}
