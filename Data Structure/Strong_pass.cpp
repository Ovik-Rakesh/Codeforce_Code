#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int lc,uc,d,sp,mx;
    lc=uc=d=sp=0;
    int len = s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]>='A' && s[i]<='Z' ) uc=1;
        else if (s[i]>='a' && s[i]<='z') lc=1;
        else if (s[i]>='0' && s[i]<='9') d=1;
        else sp=1;
    }
    int Total = 4-(uc+lc+d+sp);
    if(n<6)
    {
        mx=max(6-n,Total);
    }
    else
    {
        mx = Total;
    }
    cout<<mx;
    return 0;

}
