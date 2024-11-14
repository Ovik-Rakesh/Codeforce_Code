#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    cin>>n;
    int mishak_count_number,Cheris_count_number;
    mishak_count_number = Cheris_count_number = 0;
    while(n--)
    {
        cin>>m>>c;

        if(m==c)
        {
            continue;
        }
        else if(m>c)
        {
            mishak_count_number++;
        }
        else
        {
            Cheris_count_number++;
        }

    }
    //................................
    if(mishak_count_number==Cheris_count_number)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if ( Cheris_count_number > mishak_count_number)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Mishka"<<endl;
    }

    return 0;

}
