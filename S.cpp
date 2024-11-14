#include<iostream>
#include<string>
using namespace std;
int main ()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
   }
   for(int i=0;i<n;i++)
   {
       if(ar[i]%2==0)
        continue;
       cout<<ar[i]<<" ";
   }


    return 0;
}
