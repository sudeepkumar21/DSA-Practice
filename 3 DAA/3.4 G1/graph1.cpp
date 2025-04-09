#include <iostream>
using namespace std;

int main()
{
    //create graph using adjacency matrix
   // 0----1
   // |    |
   // 2----3
   int graph[4][4]={
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
   };

   //print the graph
   for(int i=0; i<4; i++)
   {
    for(int j=0; j<4; j++)
    {
        cout<<graph[i][j];
    }

   }
   return 0;
}