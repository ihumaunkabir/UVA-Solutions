#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a,b,c,e,g,f,k,i,j,t;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&a, &b, &c);
            scanf( "%d/%d/%d",&e, &f, &g);
            k=(c-g);
            if(b<f)
                k--;
            else if(b==f)
            {
                if(a<e)
                k--;
            }
            if(k<0)
                printf("Case #%d: Invalid birth date\n", i );
            else if(k>130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %d\n",i,k);
        }
    }
    return 0;
}
