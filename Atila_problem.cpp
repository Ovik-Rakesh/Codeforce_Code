#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        char ch='a';
        for(auto it : s)
        {
            ch = max(ch,it);
        }
        cout<<ch-'a'+1<<endl;
    }
    return 0;

}
