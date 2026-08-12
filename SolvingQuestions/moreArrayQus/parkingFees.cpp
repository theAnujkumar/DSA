#include <bits/stdc++.h> 
#include <iostream>
#include<unordered_map>
using namespace std;
#include<string>

int main()
{
    // cout << "enter no. of hrs " << endl;
    // string val ;
    // cin >> val;
    string input = "6";

    try{
        // conversion 
        int num = std::stoi(input);
        cout << "num is " << num << endl;

        if(num<0)
        {
            cout << "error" << endl;
            return 0;
        }

        int cost = 0;
        if(num <= 2)
        {
            cost = num*100;
        }
        else if(num >=3 && num <= 5)
        //else if(num <= 5)
        {
            cost = (2*100) + (num-2)*50;
            //cost+= num*50;
        }
        else{
            cost = (2*100) + (3*50) + (num-5)*20;
        }

        cout << "total cost is " << cost << endl;
    }
    
    catch(exception e)
    {
        cout << "error " << endl;
    }
    return 0;   
}