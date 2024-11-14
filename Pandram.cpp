#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    sort(s.begin(),s.end());
    for(int i=0; i<n; i++)
    {

        if(s[i]!=s[i+1])
        {
            count++;
        }

    }

    if(count==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}
