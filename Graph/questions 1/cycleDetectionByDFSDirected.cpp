#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>

bool checkDfsCycle(int node,unordered_map<int,bool> visited,unordered_map<int,bool> dfsvisited,
    unordered_map<int,list<int>> &adjList)
{
    visited[node] = true;
    dfsvisited[node] = true;
    for(auto neighbour : adjList[node])
    {
        if(!visited[neighbour])
        {
            bool cycleDetect = checkDfsCycle(neighbour,visited,dfsvisited,adjList);
            if(cycleDetect)
            {
                return true;
            }
        }
        // means both visited and dfsvisited neighbour should be visited
        else if(dfsvisited[neighbour])
        {
            return true;
        }
    }
    // returning time make sure dfsvisited should be unvisited mark
    dfsvisited[node] = false;
    return false;
}

void prepareAdjancyList(unordered_map<int,list<int>> &adjList , vector<pair<int,int>> &edges)
{
    for(int i=0 ; i<edges.size() ; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
    }
}

int detectCycleInDirectedGraph(int n , vector<pair<int,int>> &edges)
{
    unordered_map<int,list<int>> adjList;
    prepareAdjancyList(adjList,edges);

    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;

    for(int i=0 ; i<=n ; i++)
    {
        if(!visited[i])
        {
            bool cycleDetect = checkDfsCycle(i,visited,dfsvisited,adjList);
            if(cycleDetect)
            {
                return 1;
            }
        }
    }
    return 0;

}