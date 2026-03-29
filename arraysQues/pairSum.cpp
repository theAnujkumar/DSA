#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> pairSum(vector<int> &arr ,int s)
{
    vector<int> ans;

    for(int i=0 ; i<arr.size() ; i++)
    {
        for(int j=i+1 ; j<arr.size() ; j++)
        {
            if(arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                // ans.push_back(temp);
                ans.push_back(temp);
            }
        } 
    }
    sort(ans.begin() , ans.end());
    return ans;
}

main()
{
    //int arr1[5] = {1,2,3,4,5};
    vector <int> arr1 = {1,2,3,4,5};

    int s = 5;

    pairSum(arr1,5);
}

/*
    3 pair sum
    for(int i=0 ; i<arr.size() ; i++)
    {
        for(int j=i+1 ; j<arr.size() ; j++)
        {
            for(int k=j+1 ; k<arr.size() ; k++)
            {
                
            if(arr[i] + arr[j] + arr[k] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }

            }
        } 
    }
*/