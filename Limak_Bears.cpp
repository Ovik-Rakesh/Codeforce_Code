#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count = 0;
    while(1)
    {
        a*=3;
        b*=2;
        count++;
        if(a>b)
            break;

    }
    cout<<count;
    return 0;

}
