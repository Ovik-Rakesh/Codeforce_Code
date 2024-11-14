#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    char ch =  toupper(s[0]);
    printf("%c",ch);
    int len = strlen(s);
    for(int i=1;i<len;i++)
    {
        printf("%c",s[i]);
    }

    return 0;
}
