#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(10);
    d.push_back(12);
    d.push_back(15);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();
    cout << d.front() << endl;
    cout << d.back() << endl;

    if(d.empty())
    {
        cout << "queue is empty" << endl;
    }
    else{
        cout << "not empty" << endl;
    }
}