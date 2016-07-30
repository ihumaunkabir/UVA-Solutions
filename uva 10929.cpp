#include<stdio.h>
#include<string.h>
int main()
{
int i,j,s;
char n[1050];
while(1)
{   
s=0;
scanf("%s",&n);
i=strlen(n);
for(j=0;j<i;j++)
{   
s= s*10 + n[j] -'0';
s=s%11;
}
if(s==0 && i==1)    break;
else if(s==0)
printf("%s is a multiple of 11.\n",n);
else printf("%s is not a multiple of 11.\n",n);
}
return 0;
}
