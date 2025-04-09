#include<iostream>
#include<list>
using namespace std ;

int main()
{
    // create graph using adjacency matrix
    // 0----1
    // |    |
    // 2----3
    // using adjacency list  Array of list
    list<int> graph[4];
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[1].push_back(3);
    graph[2].push_back(0);
    graph[2].push_back(3);
    graph[3].push_back(2);
    graph[3].push_back(1);

    //print
    for(int i = 0; i <4;i++)
    {
        cout<<i<<"->";
        for(int x:graph[i])
        {
            cout<<x<<",";
        }
        cout<<endl;

    }

    return 0;
}