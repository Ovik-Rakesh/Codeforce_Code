#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int maxi = ar[n-1];
        int mini = ar[n-2];
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=maxi)
            {
                cout<<ar[i]-maxi<<" ";
            }
            else
            {
                cout<<ar[i]-mini<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}
