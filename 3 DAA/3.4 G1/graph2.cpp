#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // create graph using adjacency matrix
    // 0----1
    // |    |
    // 2----3
    //using adjacency list  Array of list
    vector<int> adjList[4];
    adjList[0]={1,2};
    adjList[1]={0,3};
    adjList[2]={0,3};
    adjList[3]={1,2};
    // print adjacency list

    cout<<"Adjacency List : \n";
    for(int i=0; i<4; i++)
    {
        cout<<i<<" -> ";
        for(auto x: adjList[i])
            cout<<x<<" ";
        cout<<endl;
    }




    return 0;
}