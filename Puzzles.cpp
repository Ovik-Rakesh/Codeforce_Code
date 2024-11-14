#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m];
    int mn = ar[0];
    for(int i=0; i<m; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    int dif;

    dif = ar[n-1]-ar[0];
    cout<<dif;

    return 0;

}
