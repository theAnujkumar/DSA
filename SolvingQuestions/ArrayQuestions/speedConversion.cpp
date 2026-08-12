#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    double distance = 5;
    double time = 18;

    // convert m/s to km/hr
    // 1km/hr = 5/18 m/s   and 1m/s = 18/5 km/hr
    double speed = distance/time * 18/5;

    cout << "speed is " << speed << "km/hr "<< endl;

    return 0;
}