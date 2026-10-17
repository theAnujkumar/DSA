#include<iostream>
#include<list>
#include<set>
using namespace std;

int main()
{
    list<int> l;

    list<int> a(4,100);

    for(int i:a)
    {
        cout << i << " ";
    }
    cout << endl;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);

    for(int i:l)
    {
        cout << i << " ";
    }

    cout << "\nbefore erase " << l.size();

    l.erase(l.begin());

    cout << "\nafter erase " << l.size();

    cout << endl;
    for(int i:l)
    {
        cout << i << " ";
    }

    cout << "\nsize of list " << l.size();

    
}