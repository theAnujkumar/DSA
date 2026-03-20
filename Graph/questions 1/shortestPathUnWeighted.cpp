#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
#include<algorithm>


vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	unordered_map<int,list<int>> adj;
    for(int i=0 ; i<edges.size() ; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    queue<int> q;
    q.push(s);
    parent[s] = -1;
    visited[s] = true;

    while(!q.empty())
    {
        int front = q.front();
        q.pop();

        for(auto neigbour : adj[front])
        {
            if(!visited[neigbour])
            {
                visited[neigbour] = true;
                parent[neigbour] = front;
                q.push(neigbour);
            }
        }
    }

    // shortest path find
    vector<int> ans;
    int current = t;
    ans.push_back(current);
    while(current != s)
    {
        current = parent[current];
        ans.push_back(current);
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
