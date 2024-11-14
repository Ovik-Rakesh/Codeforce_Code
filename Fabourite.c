#include<stdio.h>
int main()
{
     int t,n;
    char s[100],ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        for(int i=0;i<n;i++)
        {
             if(s[i]<s[i+1])
            {
                ch = s[i+1];
            }
        }
       printf("%c\n",ch);
       // printf("%d\n",ch);
    }


    return 0;
}
