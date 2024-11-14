#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        bool f=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                f=1;
            }
        }
        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;

}
