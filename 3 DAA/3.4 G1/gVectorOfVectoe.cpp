#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class solution
{
    public:
    // Function to calculate the number of paths in a directed graph

        vector<int> dfs(vector<vector<int>> &adj)
        {
           
            
            vector<int> result;
            int V = adj.size();
            vector<bool> visited(V, false);
            for (int u = 0; u < V; u++)
            {
                if (!visited[u])
                    dfsUtil(u, visited, result,adj);
            }
            return result;
        }
      
        void dfsUtil(int u, vector<bool> &visited, vector<int> &result, vector<vector<int>> &adj)
        {
            visited[u] = true;
            result.push_back(u);

            for (auto v : adj[u])
            {
                if (!visited[v])
                {
                    dfsUtil(v, visited, result, adj);
                }
            }
        }

        //bfs
        vector<int> bfsOfGraph(int V, vector<vector<int>> adj)
        {
            // Code here
            vector<int> ans;
            vector<bool> visited(V, false);
            queue<int> q;
            int node = 0;
            q.push(node);
            visited[0] = true;
            while (!q.empty())
            {
                int f = q.front();
                ans.push_back(f);
                q.pop();

                for (int i : adj[f])
                {
                    if (!visited[i])
                    {
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
            return ans;
        }
};


class graph {
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
        for (int v = 0; v < V; v++) {
            cout << "Vertex " << v << " -> ";
            for (auto x : adj[v])
                cout << x << " ";
            cout << endl;
        }
    }
    
  
};

int main()
{
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    solution ob;
    vector<int> ans=ob.dfs(g.adj);
    
    cout << "Depth First Traversal: ";
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
    g.printGraph();
    vector<int> bfsAns=ob.bfsOfGraph(g.V, g.adj);
    cout << "Breadth First Traversal: ";
    for (auto x : bfsAns)
        cout << x << " ";
    cout << endl;
    return 0;
}