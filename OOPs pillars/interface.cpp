#include <iostream>
using namespace std;

// Interface in C++
class Printable {
public:
    virtual void print() const = 0;          // Pure virtual function
    virtual ~Printable() {}                  // Virtual destructor
};

class Loggable {
public:
    virtual void log(const string& msg) = 0; // Pure virtual function
    virtual ~Loggable() {}
};

// Class implementing multiple interfaces
class Document : public Printable, public Loggable {
public:
    void print() const override {
        cout << "Printing document content..." << endl;
    }

    void log(const string& msg) override {
        cout << "LOG: " << msg << endl;
    }
};

// Interface (Only function declarations with = 0)
class PaymentGateway {
public:
    virtual void pay(int amount) = 0; 
};

// Class 1 implementing Interface
class UPI : public PaymentGateway {
public:
    void pay(int amount) override {
        cout << "Paid ₹" << amount << " using UPI." << endl;
    }
};

// Class 2 implementing Interface
class Card : public PaymentGateway {
public:
    void pay(int amount) override {
        cout << "Paid ₹" << amount << " using Credit Card." << endl;
    }
};

int main() {
    Document doc;
    
    // Using objects via interface pointers
    Printable* p = &doc;
    p->print();

    Loggable* l = &doc;
    l->log("Document loaded successfully.");

    PaymentGateway* payment1 = new UPI();
    PaymentGateway* payment2 = new Card();

    payment1->pay(500); // Output: Paid ₹500 using UPI.
    payment2->pay(1200); // Output: Paid ₹1200 using Credit Card.

    delete payment1;
    delete payment2;

    return 0;
}