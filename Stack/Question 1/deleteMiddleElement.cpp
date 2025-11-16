#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
// tc = O(n)
// sc = O(n)

void solve(stack<int>&inputStack , int count , int size)
{
   // base case
   if(count == size/2)
   {
      inputStack.pop();
      return ;
   }

   int num = inputStack.top();
   inputStack.pop();
   
   // recursive call
   solve(inputStack , count+1 , size);

   // processing
   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   int count = 0;

   solve(inputStack , count , N);
   
}