#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int n;  // number of vertices int e;  // number of edges
int graph[MAX][MAX];  // adjacency matrix representation of the graph
int color[MAX];  // color array for storing the color of each vertex bool bipartite;  // flag to indicate if the graph is bipartite

void dfs(int u, int c) {
    color[u] = c;  // assign color c to vertex u

    for (int v = 0; v < n; v++) {         if (graph[u][v]) {  // if there is an edge between u and v             if (color[v] == -1)  // if vertex v is uncolored                 dfs(v, 1 - c);  // color vertex v with the opposite color of u             else if (color[v] == c)  // if vertex v has the same color as u
                bipartite = false;  // graph is not bipartite
        }
    }
}

int main() {
    // read input
    printf("Enter the number of vertices and edges:\n");
    scanf("%d %d", &n, &e);

    printf("Enter the edges:\n");     for (int i = 0; i < e; i++) {         int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = graph[v][u] = 1;  // undirected graph
    }

    // initialize color array with -1 (unvisited)     for (int i = 0; i < n; i++)
        color[i] = -1;

    // DFS traversal
    bipartite = true;  // assume graph is bipartite     for (int i = 0; i < n; i++) {         if (color[i] == -1)  // if vertex i is uncolored             dfs(i, 0);  // color vertex i with color 0
    }

    // print result
    if (bipartite)
        printf("The graph is bipartite.\n");     else
        printf("The graph is not bipartite.\n");

    // DFS traversal sequence     printf("DFS traversal sequence: ");
    for (int i = 0; i < n; i++)         printf("%d ", i);
    printf("\n");

    return 0;
}
