#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int s = 0;
	int n = arr.size();
	int e = n-1;

	while(s<e)
	{
		int mid = s+(e-s)/2;

		if((mid&1 && arr[mid] == arr[mid-1]) 
		|| ((mid%2 == 0) && arr[mid] == arr[mid+1]) )
		{
			s = mid+1;
		}
		else{
			e = mid;
		}
	}
	return arr[s];
}