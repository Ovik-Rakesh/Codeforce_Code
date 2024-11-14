#include<stdio.h>
int main()
{
    long int n,m,a;
    scanf("%ld%ld%ld",&n,&m,&a);
    int ans = ((m+a-1)/a)*((n+a-1)/a);
    printf("%ld",ans);

    return 0;
}
