#include <iostream>
using namespace std;

// Abstract Class
class Shape {
protected:
    string color;

public:
    Shape(string c) : color(c) {}

    // Pure Virtual Function (forces derived classes to implement it)
    virtual void draw() = 0;

    // Concrete method (shared implementation detail)
    void showColor() {
        cout << "Color: " << color << endl;
    }
    
    virtual ~Shape() {} // Virtual destructor for safe cleanup
};

// Derived Class implementing abstract functionality
class Circle : public Shape {
private:
    double radius;

public:
    Circle(string c, double r) : Shape(c), radius(r) {}

    // Implementing the pure virtual function
    void draw() override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};

// Abstract Class
class Animal {
public:
    // Pure virtual function (forces derived classes to define sound)
    virtual void makeOptionSound() = 0; 

    // Regular function (shared feature)
    void sleep() {
        cout << "Sleeping..." << endl;
    }
};

class Dog : public Animal {
public:
    // Implementing the hidden detail
    void makeOptionSound() override {
        cout << "Bark! Bark!" << endl;
    }
};


class Vehicle {
    public:
        // this is abstract
        virtual void start() = 0;

        void sound() {
            cout << "Vehicle sound " << endl;
        }
};

class Car : public Vehicle {
    public:
        void start() override {
            cout << "Car start " << endl;
        }
        // void sound() override{
        //     cout << "Car sound " << endl;
        // }
};

int main() {
    // Shape s; // ERROR: Cannot instantiate abstract class

    // Shape* shape = new Circle("Red", 5.0);
    // shape->draw();       // Calls Circle's implementation
    // shape->showColor();  // Calls inherited concrete method

    // delete shape;

    Dog myDog;
    myDog.makeOptionSound(); // Calls Dog's version
    myDog.sleep();           // Calls base class function

    Car myCar;
    myCar.sound();
    myCar.start();
    return 0;
}