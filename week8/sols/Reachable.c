#include "Reachable.h"
#include <stdlib.h>
#include <stdbool.h>

void dfs(Graph g, Vertex v, bool* visited, List l) {
    visited[v] = true;
    int size = GraphNumVertices(g);
    for (int i = 0; i < size; ++i) {
        if (GraphIsAdjacent(g, v, i) && !visited[i]) {
            ListAppend(l, i);
            dfs(g, i, visited, l);
        }
    }
}

List getReachable(Graph g, Vertex v) {
    int numV = GraphNumVertices(g);
    bool* visited = malloc(sizeof(bool) * numV);
    for (int i = 0; i < numV; ++i) visited[i] = false;
    List l = ListNew();
    dfs(g, v, visited, l);
    return l;
}

