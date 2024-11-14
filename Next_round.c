#include<stdio.h>
int main()
{
    int n,k,cnt=0;
    scanf("%d%d",&n,&k);
    int ar[n];
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if( (ar[k]<=ar[i] && ar[i]>0 ) )
        {
            cnt++;
        }
    }

    printf("%d",cnt);


    return 0;
}
