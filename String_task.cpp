#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if( s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='y'
         )
        {
            continue;
        }
        else
        {
            s2+='.';
            s2+=s[i];
        }
    }
    cout<<s2<<endl;
    return 0;

}
