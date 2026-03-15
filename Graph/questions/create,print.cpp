#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<vector>


vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // ans array will store all adjacent nodes coorespong on indexes
    vector<int> ans[n];

    // add edges
    for(int i=0 ; i<m ; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);

    }

    vector<vector<int>> adj(n);
    // example 
    // 0 -> 1,4
    // i     j

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

// print and addEdges
/*
T.C of adding edges = O(m) ,  S.C of adding edges = O(m)
T.C of printing edges = O(n*m) ,  S.C of printing edges = O(1)
sc = O(n+m)
*/

/*
If 'N' = 3 and edges = {{0,1}, {1,2},{2,0}}.

Sample Input 2:
3 3
0 1
1 2
2 0
Sample Output 2:
0 1 2
1 0 2
2 0 1
*/