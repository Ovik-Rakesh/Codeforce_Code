#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //.................Odd
        if(i%2==1)
        {
            cout<<"I hate ";
            if(n==i)
            {
                cout<<"it";
            }
            else
            {
                cout<<"that ";
            }
        }
        //.............Even
        else
        {
            cout<<"I love ";
             if(n==i)
            {
                cout<<"it";
            }
            else
            {
                cout<<"that ";
            }
        }

    }
    return 0;

}
