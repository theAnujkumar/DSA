#include<iostream>
#include<map>
using namespace std;

// find 1st and 2nd pehele hi

int main()
{
    int arr[] = {1,0,1,1,0,0,1};
    int n = 7;

    map<int,int> count;
    for(int i=0 ; i<n ; i++)
    {
        count[arr[i]]++;
    }
    // or
    for(auto num : arr)
    {
        count[num]++;
    }
    //Ye error dega, kyunki input ek raw array hai, vector nahi.
    //Range-based loop raw array par kaam karta hai, but size pata nahi hota — compiler error ayega.

    int index = 0;
    // phele ye it loop for it=0 ke liye then it=1 ke liye
    for(auto it : count)
    {
        int element = it.first;
        int counting = it.second;

        // phele ye 0 ki counting tak chalenga fir 1 ki
        for(int i=0 ; i<counting ; i++)
        {
            arr[index++] = element;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " " << endl;
    }
}