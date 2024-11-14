#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int up=0,lw=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
            lw++;
    }
    if(up<=lw)
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s;
    }
    else
    {
       transform(s.begin(),s.end(),s.begin(), ::toupper);
       cout<<s;
    }

    return 0;

}
/* #include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
return 0;

} */
