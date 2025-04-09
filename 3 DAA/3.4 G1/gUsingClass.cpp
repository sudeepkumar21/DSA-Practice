#include<iostream>
#include<list>
#include<vector>
using namespace std;

class graph
{
    public:
        int V;
        //dynamic array of vector
        list<pair<int,int>>* l;

        graph(int v)
        {
            this->V = v;
            this->l = new list<pair<int,int>> [V];

        }

        void addEdge(int u, int v, int w)
        {
            l[u].push_back({v,w});
            l[v].push_back({u,w});
        }

        void print()
        {
            for (int u = 0; u < V; u++)
            {
                cout << "Vertex " << u << "-> ";
                for(auto v: l[u])
                    cout << "(" << v.first << ", " << v.second << ") ";
                cout << endl;
            }

        }


};

int main()
{
        // 0->1, 2,
        // 1->0, 3,
        // 2->0, 3,
        // 3->2, 1,
    graph g(4);
    // 0----1
    // |    |
    // 2----3
    g.addEdge(0, 1,5);
    g.addEdge(1,3,10);
    g.addEdge(2,3,15);
    g.addEdge(0,2,20);

    g.print();
    
    
    return 0;
}