#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    k = k%n;
    vector<int>temp(n);

    for(int i=0 ; i<n ; i++)
    {
        temp[i] = arr[(i+k)%n];
    }

    return temp;
}

// tc = O(N)
// sc = O(N) because of temp
