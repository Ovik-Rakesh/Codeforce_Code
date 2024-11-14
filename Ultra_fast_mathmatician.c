#include<iostream>
using namespace std;
int binary_Convert(int x);
int Decimal_convert(int y);
int main()
{
    int n,m;
    cin>>n>>m;

    return 0;

}

//.....................................................................
int binary_Convert(int x)
{
    int i=0;
    while(x!=0)
    {
       int rem = x%10;
       x+=rem*wpow(2,i);
       x/=10;
       i++;
    }
    return x;
}
//,...............................
int Decimal_convert(int y)
{
    int binary[100],i=0,j,dec[100];
    while(y!=0)
    {
        binary[i++]= y%2;
        y/=2;
    }
    for(j=i-1;j>=0;j--)
    {
       dec[j] = binary[j];
    }
    return dec[j];
}
