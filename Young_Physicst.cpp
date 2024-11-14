#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    int X,Y,Z;
    X=Y=Z=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
       X+=x;
       Y+=y;
       Z+=z;
    }
    if(X==0 && Y==0 && Z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
