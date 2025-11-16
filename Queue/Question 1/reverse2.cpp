#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
using namespace std;

queue<int> rev(queue<int> q)
{
    if(q.empty())
        return;

    int val = q.front();
    q.pop();
    rev(q);

    // vapas jate hue queue me value insert karte hue jana
    q.push(val);
}