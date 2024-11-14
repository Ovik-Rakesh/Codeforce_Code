#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int len = strlen(s);

    for(int j=0;j<len;j++)
    {
        for(int k=0;k<len;k++)
        {
            if(s[j]>s[k])
            {
                int tem = s[j];
                s[j] = s[k];
                s[k] = tem;
            }
        }
    }

    int cont=0;
    for( int i=0; i<len; i++)
    {
       if(s[i]!=s[i+1])
            {
                cont++;
            }
    }

    if(cont%2==1)
    {
        printf("IGNORE HIM!");
    }
    else
    {
        printf("CHAT WITH HER!");
    }




    return 0;
}
