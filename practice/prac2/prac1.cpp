#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr , int n , int k)
{
    deque<int> maxi(k);
    deque<int> mini(k);

    // for 1st k size window
    for(int i=0 ; i<k ; i++)
    {
        // it will contain all max elements or in decreasing order
        while(!maxi.empty() && arr[maxi.front()] <= arr[i])
        {
            maxi.pop_front();
        }
        while(!mini.empty() && arr[mini.front()] >= arr[i])
        {
            mini.pop_front();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

    int sum = 0;
    sum = sum + arr[maxi.front()] + arr[mini.front()];

    // for next window till n
    for(int i=k ; i<n ; i++)
    {
        // remove element
        while(!maxi.empty() && i-maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.front() >= k)
        {
            mini.pop_front();
        }

        // addition
        while(!maxi.empty() && arr[maxi.front()] <= arr[i])
        {
            maxi.pop_front();
        }
        while(!mini.empty() && arr[mini.front()] >= arr[i])
        {
            mini.pop_front();
        }
        maxi.push_back(i);
        mini.push_back(i);

        // for last loop
        sum = sum + arr[maxi.front()] + arr[mini.front()];
    }
    return sum;
}

vector<int> FirstNegativeInteger(vector<int>& arr, int k)
{
    deque<int> dq;
    int n = arr.size();
    vector<int> ans;
    
    // for 1st window
    for(int i=0 ; i<k ; i++)
    {
        if(arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    //if(!dq.empty())
    if(dq.size() > 0)
    {
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    // for another window
    for(int i=k ; i<n ; i++)
    {
        // remove 
        while(!dq.empty() && i-dq.front() >= k)
        {
            dq.pop_front();
        }
        if(arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    //if(!dq.empty())
    if(dq.size() > 0)
    {
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    return ans;
}

int main()
{
	vector<int> arr = {-8,2,3,-6,10};
	//vector<int> arr = {2,-5,-1,7,-3,-1,-2};
	int n = arr.size();
    int k = 2;
    vector<int> ans = FirstNegativeInteger(arr,k);
    for(auto i:ans)
    {
        cout << i << " " ;
    }
    cout << endl;

    int arr2[7] = {2, 5, -1, 7, -3, -1, -2};
    int k2 = 4;
    int result = solve(arr2,7,k2);
    cout << "result is " << result << endl ;

	return 0;
}