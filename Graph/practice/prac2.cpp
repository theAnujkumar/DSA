#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<set>
#include<queue>
#include<vector>

void prepareAdjancyList(unordered_map<int,set<int>> &adjList , vector<int,pair<int,int>> &edges)
{
    for(int i=0 ; i<edges.size() ; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(unordered_map<int,set<int>> &adjList , int node , vector<int> &ans , unordered_map<int,bool> visited)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();

        ans.push_back(temp);

        for(auto i : adjList[temp])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> BFS(int vertex , vector<int,pair<int,int>> edges)
{
    unordered_map<int,set<int>> adjList;
    vector<int> ans;
    unordered_map<int,bool> visited;

    // prepare adjancy list
    prepareAdjancyList(adjList,edges);

    for(int i=0 ; i<vertex ; i++)
    {
        if(!visited[i])
        {
            bfs(adjList,i,ans,visited);
        }
    }
    return ans;
}

void dfs(unordered_map<int,set<int>> &adjList , int node , vector<int> &temp ,
     unordered_map<int,bool> &visited)
{
    temp.push_back(node);
    visited[node] = true;

    for(auto i : adjList[node])
    {
        if(!visited[i])
        {
            dfs(adjList,i,temp,visited);
        }
    }
}

vector < vector < int >> depthFirstSearch(int V, int E, vector < vector < int >> & edges)
{
    unordered_map<int,set<int>> adjList;
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;

    // prepare adjancy list

    for(int i=0 ; i<edges.size() ; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].insert(v);
        adjList[v].insert(u);
    }

    for(int i=0 ; i<V ; i++)
    {
        if(!visited[i])
        {
            vector<int> temp;
            dfs(adjList,i,temp,visited);
            ans.push_back(temp);
        }
    }
}