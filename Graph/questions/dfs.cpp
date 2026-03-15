// constant time me
#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<vector>

void dfs(int node , unordered_map<int,bool> &visited , unordered_map<int,list<int>> &adj ,
vector<int> &temp)
{
    temp.push_back(node);
    visited[node] = true;

    // hr connected node ke liye recursive call
    for(auto i : adj[node])
    {
        if(!visited[i])
        {
            dfs(i,visited,adj,temp);
        }
    }
}

vector < vector < int >> depthFirstSearch(int V, int E, vector < vector < int >> & edges)
{
    unordered_map<int,list<int>> adj;
    for(int i=0 ; i<edges.size() ; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

        vector<vector<int>> ans;
        unordered_map<int,bool> visited;

        for(int i=0 ; i<V ; i++)
        {
            if(!visited[i])
            {
                vector<int> temp;
                dfs(i,visited,adj,temp);
                ans.push_back(temp);  
            }
        }
        return ans;
    }
}