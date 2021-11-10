#include "Reachable.h"
#include <stdlib.h>
#include <stdbool.h>

void dfs(Graph g, Vertex v, bool* visited) {
    visited[v] = true;
    for (int i = 0; i < GraphNumVertices(g); ++i) {
        if (GraphIsAdjacent(g, v, i) && !visited[i]) dfs(g, i, visited);
    }
}

List getReachable(Graph g, Vertex v) {
    int numV = GraphNumVertices(g);
    bool* visited = malloc(sizeof(bool) * numV);
    for (int i = 0; i < numV; ++i) visited[i] = false;
    dfs(g, v, visited);
    List l = ListNew();
    for (int i = 0; i < numV; ++i) {
        if (visited[i]) ListAppend(l, i);
    }
    return l;
}

