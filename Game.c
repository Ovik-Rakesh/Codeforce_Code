#include<stdio.h>
int main()
{
    int n,m,c;
    scanf("%d",&n);
    int mishak_count_number,Cheris_count_number;
    mishak_count_number = Cheris_count_number = 0;

    while(n--)
    {
        scanf("%d%d",&m,&c);
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
    //.............................
    if(mishak_count_number==Cheris_count_number)
    {
        printf("Friendship is magic!^^\n");
    }
    else if ( Cheris_count_number > mishak_count_number)
    {
        printf("Chris\n");
    }
    else
    {
        printf("Mishka\n");
    }


    return 0;
}
