#include <iostream>
#include <cmath>     // for M_PI constant if needed
using namespace std;

// ---- Defining a class for calculating volume of 3D figures ----
class VolumeCalculator
{
private:
    // Method for calculating volume of cube
    static void calculateVolume(int side)
    {
        cout << "----- Cube --------" << endl;
        cout << "Side : " << side << " cm" << endl;
        cout << "Volume : " << (side * side * side) << " cubic cm" << endl;
        cout << "-------------------------------" << endl;
    }

    // Method for calculating volume of sphere
    static void calculateVolume(float radius)
    {
        double volume = (4 * 3.14 * radius * radius * radius) / 3;
        cout << "----- Sphere --------" << endl;
        cout << "Radius : " << radius << " cm" << endl;
        cout << "Volume : " << volume << " cubic cm" << endl;
        cout << "-------------------------------" << endl;
    }

    // Method for calculating volume of hemisphere
    static void calculateVolume(double radius)
    {
        double volume = (2 * 3.14 * radius * radius * radius) / 3;
        cout << "----- Hemi Sphere --------" << endl;
        cout << "Radius : " << radius << " cm" << endl;
        cout << "Volume : " << volume << " cubic cm" << endl;
        cout << "-------------------------------" << endl;
    }

    // Method for calculating volume of cuboid
    static void calculateVolume(int length, int breadth, int height)
    {
        cout << "----- Cuboid --------" << endl;
        cout << "Length : " << length << " cm" << endl;
        cout << "Breadth : " << breadth << " cm" << endl;
        cout << "Height : " << height << " cm" << endl;
        cout << "Volume : " << (length * breadth * height) << " cubic cm" << endl;
        cout << "-------------------------------" << endl;
    }

    // Method for calculating volume of cylinder
    static void calculateVolume(int height, float radius)
    {
        double volume = 3.14 * radius * radius * height;
        cout << "-------- Cylinder ----------" << endl;
        cout << "Radius of Base : " << radius << " cm" << endl;
        cout << "Height : " << height << " cm" << endl;
        cout << "Volume : " << volume << " cubic cm" << endl;
        cout << "-------------------------------" << endl;
    }

    // Method for calculating volume of cone
    static void calculateVolume(float radius, int height)
    {
        double volume = (3.14 * radius * radius * height) / 3;
        cout << "-------- Cone ----------" << endl;
        cout << "Radius of Base : " << radius << " cm" << endl;
        cout << "Height : " << height << " cm" << endl;
        cout << "Volume : " << volume << " cubic cm" << endl;
        cout << "-------------------------------" << endl;
    }

public:
    // Method for performing operations for 3D figures
    static void volumeCalculation()
    {
        int operation, choice;

        do
        {
            cout << "----- ThreeD Figures Volume Calculation --------" << endl;
            cout << "1. Cube" << endl;
            cout << "2. Cuboid" << endl;
            cout << "3. Cylinder" << endl;
            cout << "4. Cone" << endl;
            cout << "5. Sphere" << endl;
            cout << "6. Hemi Sphere" << endl;
            cout << "---------------------------------" << endl;
            cout << "Select any one operation : ";
            cin >> operation;

            switch (operation)
            {
            case 1:
            {
                cout << "------ Selected Figure : Cube" << endl;
                int side;
                cout << "Enter Side(in cm): ";
                cin >> side;
                calculateVolume(side);
                break;
            }

            case 2:
            {
                cout << "------ Selected Figure : Cuboid" << endl;
                int length, breadth, height;
                cout << "Enter length(in cm): ";
                cin >> length;
                cout << "Enter breadth(in cm): ";
                cin >> breadth;
                cout << "Enter height(in cm): ";
                cin >> height;
                calculateVolume(length, breadth, height);
                break;
            }

            case 3:
            {
                cout << "------ Selected Figure : Cylinder" << endl;
                float radius;
                int cy_height;
                cout << "Enter radius(in cm): ";
                cin >> radius;
                cout << "Enter height(in cm): ";
                cin >> cy_height;
                calculateVolume(cy_height, radius);
                break;
            }

            case 4:
            {
                cout << "------ Selected Figure : Cone" << endl;
                float co_radius;
                int co_height;
                cout << "Enter radius(in cm): ";
                cin >> co_radius;
                cout << "Enter height(in cm): ";
                cin >> co_height;
                calculateVolume(co_radius, co_height);
                break;
            }

            case 5:
            {
                cout << "------ Selected Figure : Sphere" << endl;
                float sp_radius;
                cout << "Enter radius(in cm): ";
                cin >> sp_radius;
                calculateVolume(sp_radius);
                break;
            }

            case 6:
            {
                cout << "------ Selected Figure : Hemi Sphere" << endl;
                double hs_radius;
                cout << "Enter radius(in cm): ";
                cin >> hs_radius;
                calculateVolume(hs_radius);
                break;
            }

            default:
                cout << "Invalid operation" << endl;
            }

            cout << "---------------------------------" << endl;
            cout << "Press 0 to exit or any other number to continue: ";
            cin >> choice;
        } while (choice != 0);
    }
};

// ---- Initial (main) class ----
int main()
{
    // Performing volume calculation of 3D figures
    VolumeCalculator::volumeCalculation();
    return 0;
}
