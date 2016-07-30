#include<stdio.h>
#include<string.h>

int main()
{
	int l,l1,l2,i,j,bin;
	char s[1000],s1[1000],s2[1000];
	
	while(gets(s))
	{
	bin=0;
	l1=-1;
	l=strlen(s);
	if(l==4 && s[0]=='D' && s[1]=='O' && s[2]=='N' && s[3]=='E')
		break;
	for(i=0;i<l;i++)
    {
    if(s[i]!='.' && s[i]!=',' && s[i]!='?' && s[i]!='!' && s[i]!=' ')
        {
        l1++;
        s1[l1]=s[i];
        }
    }
    
	for(j=0;j<=l1;j++)
    {
    if(s1[j]!=s1[l1-j] && s1[j]!=(s1[l1-j]+32) && s1[j]!=(s1[l1-j]-32))
        {
        printf("Uh oh..\n");
        bin=1;
        break;
        }
    		}
    
	if(bin==0)
	printf("You won't be eaten!\n");
	}

}
