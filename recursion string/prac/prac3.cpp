#include<iostream>
using namespace std;
#include<vector>

bool linearSearch(int *arr , int n , int key)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0] == key)
    {
        return true;
    }

    return linearSearch(arr+1 , n-1 , key);
}

int total(int *arr , int n)
{
    int ans = 0;

    if(n==0)
    {
        return ans;
    }
    ans = arr[0] + total(arr+1,n-1);
    return ans;
}

vector<vector<int>> findSoln(vector<int> &nums , vector<vector<int>> ans , 
    vector<int> output , int i , int n)
{
    if(i >= n)
    {
        ans.push_back(output);
        return ans;
    }

    // exclusive
    findSoln(nums,ans,output,i+1,n);

    // inclusive
    int num = nums[i];
    output.push_back(num);
    findSoln(nums,ans,output,i+1,n);

    return ans;
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;
    int n = nums.size();

    findSoln(nums,ans,output,index,n);
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int key = 10;
    if(linearSearch(arr,n,key))
    {
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    int ans = total(arr,n);
    cout << "ans is " << ans << endl;
}