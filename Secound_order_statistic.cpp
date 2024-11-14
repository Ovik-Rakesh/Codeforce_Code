#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()== 1) cout<<"NO"<<endl;
    else
    {
        cout<<*(++s.begin())<<endl;
    }
    return 0;

}
