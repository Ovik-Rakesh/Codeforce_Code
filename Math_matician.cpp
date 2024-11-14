#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m,n;
    cin>>m>>n;
    for(int i=0; i<m.size(); i++)
    {
        if(m[i]==n[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }

    return 0;

}
