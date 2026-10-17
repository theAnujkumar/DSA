#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    // creation
    // TC= (1)
    unordered_map<string,int> m;

    // ordered map follow bst TC=O(logn)

    // insertion 1
    pair<string,int> p = make_pair("anuj",1);
    m.insert(p);

    pair<string,int> p1("sher",2);
    m.insert(p1);

    m["mera"] = 3;
    cout << m["mera"] << endl;

    m["search"];
    cout << m["search"] << endl;
    cout << m.at("search") << endl;
    cout << m.at("mera") << endl;
    cout << "size is " << m.size() << endl;

    cout << "present is " << m.count("search") << endl;

    for(auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

}

/* 
search , insert , delete = O(1)
*/