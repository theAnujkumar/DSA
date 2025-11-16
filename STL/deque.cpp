#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout << i << " ";
    }

    //d.pop_back();
    cout << endl;
    for(int i:d)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << "element at zero index is " << d.at(0);

    cout << "\nfront" << d.front();
    cout << "\nback" << d.back();

    cout << "\nempty or not " << d.empty();
    cout << "\nbefore erase " << d.size();

    d.erase(d.begin() , d.begin()+1);

    cout << "\nafter erase " << d.size();

    for(int i:d)
    {
        cout << i << " ";
    }
}