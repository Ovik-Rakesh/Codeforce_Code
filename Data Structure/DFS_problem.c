#include <stdio.h>
#include <stdbool.h>

#define MAX 100
int n; // number of vertices
int e; // number of edage
int graph[MAX][MAX];
int color[MAX];
bool bipartite;

void dfs(int u, int c)
{
    color[u] = c;
    for (int v = 0; v < n; v++)
    {
        if (graph[u][v])
        {
            if (color[v] == -1)
                dfs(v, 1 - c);
            else if (color[v] == c)
                bipartite = false;
        }
    }
}


int main()
{
    // read input
    printf("Enter the number of vertices and edges:\n");
    scanf("%d %d", &n, &e);

    printf("Enter the edges:\n");
    for (int i = 0; i < e; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = graph[v][u] = 1;
    }

    // initialize color array with -1 (unvisited)
    for (int i = 0; i < n; i++)
    {
        color[i] = -1;
    }

    // DFS traversal
    bipartite = true;
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
            dfs(i, 0);
    }

    // print result
    if (bipartite)
        printf("The graph is bipartite.\n");
    else
        printf("The graph is not bipartite.\n");

    // DFS traversal sequence :
    printf("DFS traversal sequence: ");
    for (int i = 0; i < n; i++)
        printf("%d ", i);
    printf("\n");

    return 0;
}
