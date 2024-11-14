#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,police,crime;
    police = crime = 0;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            police+=x;
        }
        else
        {
            if(police<1)
                ++crime;
            else
                --police;
        }
    }
    cout<<crime<<endl;
    return 0;

}
