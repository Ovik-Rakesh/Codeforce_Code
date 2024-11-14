#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    if(n%5==0)
    {
        ans = n/5;
    }
    else
    {
        ans = 1+ n/5;
    }
    cout<<ans;
    return 0;

}
