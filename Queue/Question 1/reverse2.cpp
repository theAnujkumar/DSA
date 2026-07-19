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

// int main()
// {
//     queue<int> q;

//     q.push(10);
//     cout << "front is " << q.front() << endl;

//     q.push(12);
//     cout << "front is " << q.front() << endl;

//     q.push(15);
//     cout << "front is " << q.front() << endl;

//     queue<int> ans = rev(q);
//     cout << "front is " << ans.front() << endl;
//     ans.pop();
//     cout << "front is " << ans.front() << endl;
//     ans.pop();
//     cout << "front is " << ans.front() << endl;
//     //ans.pop();

//     return 0;
// }