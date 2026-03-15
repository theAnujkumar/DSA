// adjancy list 
#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>

class graph{
    public:
        unordered_map<int,list<int>> adj;
        void addEdge(int u,int v,bool direction)
        {
            // direction 0 -> undirected
            // direction 1 -> directed
            adj[u].push_back(v);
            if(!direction)
            {
                adj[v].push_back(u);
            }
        }

        void print()
        {
            for(auto i:adj)
            {
                cout << i.first << "->" ;
                for(auto j:i.second)
                {
                    cout << j << "," ;
                }
                cout << endl;
            }
        }
};

int main()
{
    graph g;
    int edges = 6;
    int nodes = 5;

    for(int i=0 ; i<edges ; i++)
    {
        int u,v;
        cout << "enter values " << endl;
        cin >> u >> v;

        // create undirected graph
        g.addEdge(u,v,0);
    }

    g.print();

    return 0 ;
}
/*
0 1
0 4
1 3 
1 2
2 3
3 4
*/