#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int p,v,t;
    for( int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&p,&v,&t);
        if(p+v+t>=2)
        {
             cnt++;
        }
    }

    printf("%d",cnt);


    return 0;
}
