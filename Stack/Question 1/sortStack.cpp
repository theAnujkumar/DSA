#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

void sortInsert(stack<int> &stack , int num)
{
	// base case
	// example add 5 in right place
	// pop every element until get less than it
	if(stack.empty() || (!stack.empty() && stack.top() < num))
	{
		stack.push(num);
		return ;
	}

	int n = stack.top();
	stack.pop();

	// recursive call
	sortInsert(stack,num);

	stack.push(n);
}

void sortStack(stack<int> &stack)
{
	// base case
	if(stack.empty())
	{
		return;
	}

	int num = stack.top();
	stack.pop();

	// recursive call
	// top ke alawa sabhko sort me kar ke leayenga
	sortStack(stack);

	// sorted way me insert karke le ayenga us element ko
	sortInsert(stack,num);

}
/*
	9,6,4,2,1
*/
// tc = O(N)