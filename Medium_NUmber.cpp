#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if( (a<=b && b<=c) || (c<=b && b<=a) )
        {
            cout<<b<<endl;
        }
        else if( (b<=c && c<=a) || (a<=c && c<=b) )
        {
            cout<<c<<endl;
        }
        else if( (c<=a && a<=b) || (b<=a && a<=c) )
        {
            cout<<a<<endl;
        }
    }
    return 0;

}
