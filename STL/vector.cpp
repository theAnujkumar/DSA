#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;

    vector <int> a(4,1);
    // size = 4 , initialize = 1;

    vector <int> last(a);

    for(int i:a) {
        cout <<i<<" ";
    }

    for(int i:last) {
        cout <<i<<" ";
    }

    cout << "\nCapacity is " << v.capacity();

    v.push_back(1);
    cout << "\nCapacity is " << v.capacity();

    v.push_back(2);
    cout << "\nCapacity is " << v.capacity();

    v.push_back(3);
    cout << "\nCapacity is " << v.capacity();

    cout << "\nthe size is " << v.size();

    cout << "\nelement at 2nd index " << v.at(2);

    cout << "\nfirst element " << v.front();
    
    cout << "\nlast element " << v.back();

    cout << "\nbefore pop" ;

    for(int i:v) {
        cout <<i<<" ";
    }

    v.pop_back();

    cout << "after pop";

    for(int i:v) {
        cout <<i<<" ";
    }

    cout << "\nbefore clear size" << v.size();
    v.clear();
    cout << "\nafter clear size" << v.size();

}
