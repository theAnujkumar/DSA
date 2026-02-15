// adjancy list 
#include<iostream>
using namespace std;
#include<unordered_map>
template <typename T>
#include<list>

class graphNew{
    public:
        unordered_map<T, list<T> > adj;

        void addEdge(T u,T v,bool direction)
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
    graphNew<int> g;
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