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

    // insertion 2
    pair<string,int> pr("sher",2);

    // insertion 3
    m.insert(pr);


    m["mera"] = 3;

    // update
    m["mera"] = 4;

    // search
    cout << m["mera"] << endl;

    // right 
    m["search"];
    cout << m["search"] << endl;

    cout << m.at("search") << endl;

    // wrong sequence
    // cout << m.at("search") << endl;
    // cout << m["search"] << endl;

    // size
    cout << "size is " << m.size() << endl;

    // to check presence
    cout << "present is " << m.count("search") << endl;


    m.erase("mera");
    cout << "size is " << m.size() << endl;

    // to check presence
    cout << "present is " << m.count("mera") << endl;

    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

}

/* 
search , insert , delete = O(1)
*/