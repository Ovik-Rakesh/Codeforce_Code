#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,m,ans;
    cin>>n>>k;
    if(n%2==1)
        m = n/2+1;
    else
        m = n/2;

    if(m<k)
    {
        ans = (k-m)*2;
    }
    else
    {
        ans = (k-1)*2+1;
    }
    cout<<ans<<endl;

    return 0;

}
// 1000000000000 500000000001
