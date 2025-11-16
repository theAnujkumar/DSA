#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> &v)
{
    int s = 0;
    int e = v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }

    return v;
}

void print(vector<int> v)
{
    for(int i=0 ; i<v.size() ; i++)
    // int m = 2;
    //for(int i=m+1 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector <int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout << "normal elements\n";
    for(int i=0 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }

    vector <int> ans = reverse(v);

    cout << "\nprint reverse array\n";
    print(ans);

    return 0;
}
/*
Agar tum vector by reference (vector<int>&) pass karte instead of by value,
toh copy nahi banti → Space = O(1).
Tab complexity hoti:

reverse → O(n) time, O(1) space

print → O(n) time, O(1) space*/