#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int ar[n];
    double ans;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    ans = double (sum)/n;
    cout<<ans<<endl;
    return 0;

}
