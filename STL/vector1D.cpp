#include<iostream>
#include<vector>
using namespace std;


void printArray(vector <int> data)
{
    for(int i=0 ; i<data.size() ; i++)
    {
        cout << data[i] << " " ;
    }
}

void fun(vector <int> &blash)
{
    for(int i=0 ; i<=5 ; i++)
    {
        blash.push_back(i);
    }
}

int main()
{
    vector <int> vec_number = {1,22,3,5,7};
    printArray(vec_number);


    vector<int> number ;
    fun(number);
    for(int i=0 ; i<=5 ; i++)
    {
        cout << number[i] << " ";
    }

    return 0;
}