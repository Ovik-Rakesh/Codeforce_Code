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
       //  sort(a,a+n);
         int max = a[0];
        for(int i=n-1;i>=0;i--)
        {
            if(max<a[i])
            {
                max = a[i];
            }
            a[0] = max;

            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;

}
