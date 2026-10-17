#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);

    cout << "\nfinding 7 --> " << binary_search(v.begin(),v.end(),7);
    cout << "\nfinding 4 --> " << binary_search(v.begin(),v.end(),4);

    cout << "\nupper bound " << upper_bound(v.begin(),v.end(),7)-v.begin();
    cout << "\nlower bound " << lower_bound(v.begin(),v.end(),7)-v.begin();

    int a = 3;
    int b = 5;

    cout << "\nMin is ->" << min(a,b);
    cout << "\nMax is ->" << max(a,b);

    cout << "\nvalue of a before swap is " << a;
    cout << "\nvalue of b before swap is " << b;

    swap(a,b);

    cout << "\nvalue of a after swap is " << a;
    cout << "\nvalue of b after swap is " << b;

    string name = "abcd";
    reverse(name.begin(),name.end());
    cout <<"\nname= " << name;

    rotate(v.begin(),v.begin()+1,v.end());
    cout << "\nafter rotate ";
    for(int i:v)
    {
        cout << i << " ";
    }
    rotate(v.begin(),v.end()+1 , v.end());
    cout << "\nafter rotate ";
    for(int i:v)
    {
        cout << i << " ";
    }

    int basic[3] = {1,2,3};

    array<int,4> arr = {1,2,3,4};

    int size = arr.size();

    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] <<" ";
    }
    array<int,3> arr1 = {1,2,3};

    cout << "\nelement at 2nd index is " << arr[2];

    cout << "\nempty or not" << arr.empty();

    cout << "\nfirst element " << arr.front();
    
    cout << "\nlast element " << arr.back();

    cout << "\nfirst element " << arr1.front();
    
    cout << "\nlast element " << arr1.back();

}