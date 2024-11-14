#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,count=0;
    cin>>n>>h;
    int ar[n];
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
        if(ar[i]>h)
        {
            count++;
        }
    }
    int per_person = n-count;
    int bend_person = count*2;
    int total_length = per_person+bend_person;
    cout<<total_length;


    return 0;

}
