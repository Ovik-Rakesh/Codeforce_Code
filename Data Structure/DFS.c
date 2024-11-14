#include <stdio.h>
#include <stdbool.h>

#define MAX 100

  int n,e;
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
            bipartite = false;
        }
    }
}


int main()
{
    // Input.........................

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &n, &e);

    printf("Enter the edges:\n");
    for (int i = 0; i < e; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = graph[v][u] = 1;  // undirected graph
    }

    for (int i = 0; i < n; i++)
        color[i] = -1;

    // DFS traversal
    bipartite = true;
    dfs(i, 0);


    // DFS traversal sequence
    printf("DFS traversal sequence: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

// print result
    if (bipartite)
    {
        printf("The graph is bipartite.\n");
    }
    else
    {
        printf("The graph is not bipartite.\n");
    }

    return 0;
}







