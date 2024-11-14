#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        count+=ar[i];
    }
    if(count>0) cout<<"HARD";
    else cout<<"EASY";
    return 0;

}
