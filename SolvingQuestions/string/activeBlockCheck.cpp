#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cout << "enter the no. of vendors " << endl;
    cin >> n;

    unordered_set<int> registered;
    for(int i=0 ; i<n ; i++)
    {
        int id;
        cout << "enter the id " << endl;
        cin >> id;
        registered.insert(id);
    }

    int q;
    cout << "enter the no. of operations " << endl;
    cin >> q;

    cin.ignore();       // remove new line after q

    unordered_set<int> active;

    int blockCount = 0;
    int checkCount = 0;

    while(q--)
    {
        string line;
        getline(cin,line);

        stringstream ss(line);

        string operation;
        int id;

        ss >> operation >> id;

        if(operation == "Entry" || operation == "entry")
        {
            if(registered.count(id))
            {
                active.insert(id);
            }
            else{
                blockCount++;
            }
        }
        else if(operation == "Check" || operation == "check")
        {
            checkCount++;
        }
        else if(operation == "Exit" || operation == "exit")
        {
            active.erase(id);
        }
    }
    cout << "active size " << active.size() << endl;
    cout << "block count " << blockCount << endl;
    cout << "check count " << checkCount << endl;

    return 0;
}
// active vendor
// blocked vendor
// check request cnt
