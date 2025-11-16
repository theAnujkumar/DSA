#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);

    cout << "\nfinding 7 -->" << binary_search(v.begin(),v.end(),7);

    cout << "\nupper bound " << upper_bound(v.begin(),v.end(),7)-v.begin();
    cout << "\nlower bound " << lower_bound(v.begin(),v.end(),7)-v.begin();

    int a = 3;
    int b = 5;

    cout << "\nMin is ->" << min(a,b);
    cout << "\nMax is ->" << max(a,b);

    swap(a,b);

    cout << "\nvalue of a is " << a;

    string name = "abcd";
    reverse(name.begin(),name.end());
    cout <<"\nname= " << name;

    rotate(v.begin(),v.begin()+1,v.end());
    cout << "\nafter rotate";
    for(int i:v)
    {
        cout << i << " ";
    }

}