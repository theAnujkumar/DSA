#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

//vector<int> findUnique(vector<int> &arr)
unordered_set<int> findUnique(const vector<int>& arr) 
{
    int n = arr.size();
    
    unordered_map<int,int> freq;
    // for(int i=0 ; i<n ; i++)
    // {
    //     freq[arr[i]]++;
    // }
    for(int num : arr)
    {
        freq[num]++;
    }

    //vector<int> uniqueElement;

    unordered_set<int> uniqueElement;

    for(auto &p : freq)
    {
        if(p.second == 1)
        {
            uniqueElement.insert(p.first);
        }
    }
    // for(int num : arr)
    // {
    //     if(freq[num] == 1)
    //     {
    //         uniqueElement.push_back(num);
    //     }
    // }
    return uniqueElement;
}

int main()
{
    vector<int> arr = {1,2,2,3,4,4,5};

    // pair element = 2

    //vector<int> result = findUnique(arr);
    unordered_set<int> result = findUnique(arr);

    cout << "the ans is " ;
    for(int a : result)
    {
        cout << " " << a ;
    }
    return 0;
}