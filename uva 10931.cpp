#include<stdio.h>

int main()
{
    unsigned long int n;
    int i,c,b[1000];
    while(scanf("%lu",&n)==1)
    {
        if(n==0)
        break;
        i=0;
        while(n!=0)
        {
            b[i]=n%2;
            n/=2;
            i++;
        }
        c=0;
        printf("The parity of ");
        for(i=i-1;i>=0;i--)
        {
            printf("%d",b[i]);
            if(b[i]==1)
            c++;
        }
        printf(" is %d (mod 2).\n",c);
    }
    return 0;
}
