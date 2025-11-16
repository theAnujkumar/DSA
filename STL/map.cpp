#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m ;

    m[1] = "Anuj";
    m[13] = "chettah";
    m[2] = "sher";
    m[6] = "hero";

    m.insert( {5,"bheem"});

    cout << "\nbefore erase";

    for(auto i:m)
    {
        cout<<i.first<< " " << i.second << endl;
    }

    cout << "finding 13 " << m.count(13);

    m.erase(6);
    cout <<"\nafter erase";

    for(auto i:m)
    {
        cout<<i.first<< " " << i.second << endl;
    }

    auto it = m.find(5);

    for(auto i=it ; i!=m.end() ; i++)
    {
        cout << (*i).first <<endl;
    }
    
}