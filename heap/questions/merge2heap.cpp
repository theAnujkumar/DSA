// heapify tc=O(n)

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// class Node {
//    public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };

// User function Template for C++

class Solution {
    private:
    void heapify(vector<int> &arr , int n , int i)
    {
        int largest = i;
        // 1 based indexing
        // for 0 based 2*i + 1
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && arr[largest] < arr[left])
        {
            largest = left;
        }
        if(right < n && arr[largest] < arr[right])
        {
            largest = right;
        }

        if(largest != i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
    
  public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans;
        for(auto i : a)
        {
            ans.push_back(i);
        }
        for(auto i : b)
        {
            ans.push_back(i);
        }
        
        int size = ans.size();
        for(int i=size/2 - 1 ; i>=0 ; i--)
        {
             heapify(ans,size,i);
        }

        for(int i=0 ; i<size ; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        
        return ans;
    }
};

// TC = O(m+n)
// sc = O(n+m)
