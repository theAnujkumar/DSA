#include<iostream>
#include<map>
using namespace std;

int main()
{
    int arr[] = {1,0,1,1,1,0,1};
    int n = 7;

    map<int,int> count;
    // for(int i=0 ; i<n ; i++)
    // {
    //     count[arr[i]]++;
    // }
    // or
    for(auto num : arr)
    {
        count[num]++;
    }

    int index = 0;
    for(auto it : count)
    {
        int element = it.first;
        int counting = it.second;

        for(int i=0 ; i<counting ; i++)
        {
            arr[index++] = element;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}