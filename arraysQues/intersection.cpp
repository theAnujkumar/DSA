#include<iostream>
#include<vector>
using namespace std;


vector<int> findArrayIntersection(vector<int> &arr1 ,int n,vector<int>& arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) {
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}
/*
//int findArrayIntersection(int arr[] , int n)
{
    vector<int> ans;

    for(int i=0 ; i<n ; i++)
    {
        int element = arr1[i];

        for(int j=0 ; j<m ; j++)
        {
            if(element < arr2[j])
            break;

            if(element == arr2[j])
            {
                ans.push_back(element);
                arr2[j]=-1;
                break;
            }
        }
    }
}
*/

main() 
{
    vector<int> number1 = {1,2,2,3,4,5};
    vector<int> number2 = {2,2,3,6};

    findArrayIntersection(number1,6,number2,4);

    /*
    for(int i=0 ; i<=5 ; i++)
    {
        cout << number[i] << " ";
    }
    */

}