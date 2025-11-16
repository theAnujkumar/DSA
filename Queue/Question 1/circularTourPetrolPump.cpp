#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution {
  public:
    int circularTour(vector<int>& a1, vector<int>& a2) {
        
    }
    int tour(petrolPump p[],int n)
    {
        int deficient = 0;
        int balance = 0;
        int start = 0;
        
        for(int i=0 ; i<n ; i++)
        {
            balance += p[i].petrol - p[i].distance;
            if(balance < 0)
            {
                deficient += balance;
                start = i+1;
                balance = 0;
            }
        }
        
        if(balance + deficient >= 0)
        {
            return start;
        }
        else{
            return -1;
        }
    }
};