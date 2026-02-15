#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// int maximumFrequency(vector<int> &arr, int n)
// {
//     unordered_map<int,int> count;

//     for(int i=0 ; i<n ; i++)
//     {
//         count[arr[i]]++;
//     }

//     int maxi = INT8_MIN;
//     int ans = -1;

//     for(auto it : count)
//     {
//         if(it.second > maxi)
//         {
//             maxi = it.second;
//             ans = it.first;
//         }
//     }
//     return ans;
// }


int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int> count;
    int maxFreq = 0;
    int maxAns = 0;

    for(int i=0 ; i<n ; i++)
    {
        count[arr[i]]++;
        maxFreq = max(maxFreq,count[arr[i]]);
    }

    for(int i=0 ; i<n ; i++)
    {
        if(maxFreq == count[arr[i]])
        {
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}

int main()
{
    vector<int> arr = {1,2,2,2,3,4,5};
    int n=arr.size();

    cout << "Unique elements: ";
    cout << " ans is " << maximumFrequency(arr,n);
    // for (int x : unique) cout << x << " ";  // order not guaranteed (unordered_set)
    return 0;
}