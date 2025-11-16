#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(8);
    s.insert(8);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(4);

    for(auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(s.begin());

    for(auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "-5 present or not " << s.count(-5);

    set<int> :: iterator itr = s.find(5);
    cout << endl;

    for(auto it=itr ; it!=s.end() ; it++)
    {
        cout<< *it <<" ";
    }

}

