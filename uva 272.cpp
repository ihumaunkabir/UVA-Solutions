#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    long i,l,p=0;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='"')
            {
                p=p+1;
                if(p%2==1)
                printf("``");
                else
                printf("''");
            }
            else
            printf("%c",s[i]);
        }
        printf("\n");

    }
    return 0;
}
