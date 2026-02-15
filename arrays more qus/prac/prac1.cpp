#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findUnique(vector<int> &arr) {
    unordered_map<int,int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    vector<int> uniqueElements;
    for (int num : arr) {
        if (freq[num] == 1)
            uniqueElements.push_back(num);
    }

    return uniqueElements;
}

int main() {
    vector<int> arr = {1,2,2,3,4,4,5};
    vector<int> unique = findUnique(arr);

    for (int x : unique) 
        cout << x << " ";
}
// ans = 1,3,5

/*
    void print(int arr[],int n)
    {
        for(int i=0 ; i<n ; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void print(vector<int> arr2,int n)
    {
        for(int i=0 ; i<n ; i++)
        {
            cout << arr2[i] << " ";
        }
    }

int main()
{
    int arr[6] = {0,1,5,0,3,0};
    vector<int> arr2 = {1,2,2,3,4,4,5};

    print(arr,6);
    print2(arr2,7);

    for(int x:arr2)
    {
        cout << x << " ";
    }
}
*/
