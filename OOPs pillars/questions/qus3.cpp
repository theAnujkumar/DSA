#include<iostream>
using namespace std;

class base {
    public:
        virtual void show()
        {
            cout << "this is base" << endl;
        }
};

class derived : public base {
    public :
        void show() override {
            cout << "this is derived" << endl;
        }
};


int main()
{
    base *ptr = new derived();
    ptr->show();
    
    base *ptr1 = new base();
    ptr1->show();
    return 0;
}
