#include<stdio.h>

int main()
{

    int n=1,i;
    signed long int a,b,c;
    scanf("%d",&i);
    while( n<=i )
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a){
            if((a==b && b-c!=0) || (a==c && c-b!=0) || (b==c && c-a!=0)) printf("Case %d: Isosceles\n",n);
                else if(a==b && b==c && c==a) printf("Case %d: Equilateral\n",n);
                    else printf("Case %d: Scalene\n",n);
        }
        else printf("Case %d: Invalid\n",n);
        n++;

    }
}
