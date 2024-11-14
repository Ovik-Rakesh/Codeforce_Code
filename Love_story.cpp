#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    string s,s1;
    s1 = "codeforces";
    while(t--)
    {
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s1[i]!=s[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;

}
