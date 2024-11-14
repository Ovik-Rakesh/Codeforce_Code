#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count = 0;
        string s;
        cin>>s;
        int len = s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i]==s[i+1])
                count++;
        }
        if(count==len-1)
            cout<<"-1"<<endl;
        else
            cout<<len-1<<endl;

    }
    return 0;

}
