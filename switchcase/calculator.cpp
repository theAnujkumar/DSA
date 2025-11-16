#include<iostream>
using namespace std;

int main() {
    
    int ch;
    char z='y';

    int x,y;

    do
    {
    
    cout << "Menu";
    cout << "\npress 1 for addition";
    cout << "\npress 2 for subtraction";
    cout << "\npress 3 for multiply";
    cout << "\npress 4 for divide";

    cout << "\nenter the choice ";
    cin >> ch;

        
            if((ch>=1) && (ch<=4)) 
            {
            cout << "enter the value of x and y";
            cin >> x >> y;
            }

            switch(ch)
            {
                case 1:
                int sum;
                sum = x+y;
                cout << sum;
                break;

                case 2:
                int sub;
                sub = x-y;
                cout << "\nresult is" << sub;
                break;

                case 3:
                int mul;
                mul = x*y;
                cout << mul;
                break;
            }
            
            cout << "\ndo you want to continue? ";
            cin >> z;
            

        } while ((z=='y') || (z=='Y'));


        }


