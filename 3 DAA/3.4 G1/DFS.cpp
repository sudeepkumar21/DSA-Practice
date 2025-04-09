#include <iostream>
#include <vector>
using namespace std;


class graph
{
public:
    int V;
    vector<vector<int>> adj;
    graph(int v)
    {
        this->V = v;
        this->adj = vector<vector<int>>(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph()
    {
        for (int v = 0; v < V; v++)
        {
            cout << "Vertex " << v << " -> ";
            for (auto x : adj[v])
                cout << x << " ";
            cout << endl;
        }
    }

    void dfsHelper(vector<bool> &visited,int node)
    {
        visited[node] = true;
        cout << node << " ";
        for (auto x : adj[node])
        {
            if (!visited[x])
                dfsHelper(visited, x);
        }


    }
    void dfs()
    {
        vector<bool> visited(V, false);
       dfsHelper(visited,0);


    }
};

int main()
{
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

   
    g.dfs();
   
    return 0;
}