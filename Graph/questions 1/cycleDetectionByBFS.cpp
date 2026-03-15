#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>


// if node already visited and parent already get then ignore/neglect

// if node already visited and that is not parent then cycle present

bool checkBfsCycle(int src , unordered_map<int,bool> visited , unordered_map<int,list<int>> adj)
{
    // 1st visited true of that node
    // 2nd set parent of that node
    unordered_map<int,int> parent;
    parent[src] = -1;
    visited[src] = true;

    // 3rd push into queue
    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int front = q.front();
        q.pop();

        for(auto neighbour : adj[front])
        {
            // if node already visited and that is not parent then cycle present
            if(visited[neighbour]==true && neighbour != parent[front])
            {
                return true;
            }

            // normal case neighbour not visited
            else if(!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
                // exmaple 2 ka parent 1 hai
                // 1 front me hai
                // parent[2] = 1
            }

            // if node already visited and parent already get then ignore/neglect
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    
    // step 1 graph to adjancy list
    // create adjancy list
    unordered_map<int,list<int>> adj;
    for(int i=0 ; i<edges.size() ; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;
    // loop for example graph = 2 or more than 
    for(int i=0 ; i<n ; i++)
    {
        if(!visited[i])
        {
            bool ans = checkBfsCycle(i,visited,adj);
            if(ans == 1)
            {
                return "Yes";
            }
        }
    }
    return "No";
}
