#include<iostream>
using namespace std;
#include<map>

int main()
{
    int arr[] = {1,0,0,1,1,0};
    int n = 6;

    map<int,int> count;

    for(int i=0 ; i<n ; i++)
    {
        count[arr[i]]++;
    }

    int index = 0;
    for(auto it : count)
    {
        int element = it.first;
        int counting = it.second;

        for(int i=0 ; i<counting ; i++)
        {
            arr[index] = element;
            index++;
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}