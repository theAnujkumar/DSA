#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<set>
#include<queue>
#include<vector>
vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // ans array will store all adjacent nodes coorespong on indexes
    vector<int> ans[n];

    for(int i=0 ; i<m ; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    vector<vector<int>> adj(n);
    for(int i=0 ; i<n ; i++)
    {
        adj[i].push_back(i);

        // entering neighbour
        for(int j=0 ; j<ans[i].size() ; j++)
        {
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}

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

// tc = O(E) = O(m)


void bfs(unordered_map<int,set<int>> &adjList , unordered_map<int,bool> &visited , 
    vector<int> &ans , int node)
{
  queue<int> q;
  q.push(node);
  visited[node] = true;

  while(!q.empty())
  {
    int frontNode = q.front();
    q.pop();

    // store answer into ans node
    ans.push_back(frontNode);

    // push all unvisited neighbour into queue
    for(auto i : adjList[frontNode])
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

  prepareAdjancyList(adjList,edges);

  // traverse all nodes/components of graph
  // tc = O(n) = O(v)
  for(int i=0 ; i<vertex ; i++)
  {
    if(!visited[i])
    {
        bfs(adjList,visited,ans,i);
    }
  }

  return ans;
}
