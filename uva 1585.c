#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int a[101],b,c,d,i,j,k,l,n,sum;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='O')
            a[j]=1;
            else if(s[j]='X')
            a[j]=0;
        }
        c=0,sum=0;
    for(k=0;k<l;k++)
    {
            if(a[k]==1)
            {
                c++;
            }
            if(a[k]==0)
            {
                c=0;
            }
            sum=sum+c;
    }
        printf("%d\n",sum);
  }
  return 0;
}
