#include "Graph.h"
#include "List.h"
#include "Reachable.h"

int main(void) {
    Graph g = GraphNew(6);
    Edge edges[4] = {
        {0, 1, 1},
        {1, 2, 1},
        {3, 4, 1},
        {4, 5, 1}
    };
    for (int i = 0; i < 4; ++i) GraphInsertEdge(g, edges[i]);
    List reachables = getReachable(g,1);
    ListPrint(stdout, reachables);
    ListFree(reachables);
    GraphFree(g);
}






















/*
1) Initialize distances of all vertices as infinite.

2) Create an empty priority_queue pq.  Every item
   of pq is a pair (weight, vertex). Weight (or 
   distance) is used used as first item  of pair
   as first item is by default used to compare
   two pairs

3) Insert source vertex into pq and make its
   distance as 0.

4) While either pq doesn't become empty
    a) Extract minimum distance vertex from pq. 
       Let the extracted vertex be u.
    b) Loop through all adjacent of u and do 
       following for every vertex v.

           // If there is a shorter path to v
           // through u. 
           If dist[v] > dist[u] + weight(u, v)

               (i) Update distance of v, i.e., do
                     dist[v] = dist[u] + weight(u, v)
               (ii) Insert v into the pq (Even if v is
                    already there)
               
5) Print distance array dist[] to print all shortest
   paths. 
*/