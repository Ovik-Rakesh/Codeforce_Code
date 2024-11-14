#include<bits/stdc++.h>
using namespace std;
int a[20][20],q[20],visited[20],n,i,j,f=1,r=0;
void bfs(int v);
int main()
{
    cout<<"Enter the vertex number: ";
    cin>>n;
    cout<<endl<<"Enter the Graps data value: "<<endl;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int v;
    cout<<"Enter the starting Vertex: ";
    cin>>v;
    bfs(v);
    for(int i=0;i<n;i++)
    {
        cout<<q[i]<<" ";
    }
    return 0;
}
void bfs(int v)
{
    for (i=0; i<n; i++)
    {
        if(a[v][i] && !visited[i])
            q[++r]=i;
    }
    if(f<=r)
    {
        visited[q[f]]=1;
    }
      bfs(q[f++]);
}
