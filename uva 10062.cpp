#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	int f[128+1];
	char a[1000+1];
	int i,j,k,l;

	memset(f,0,sizeof(f));
	while(gets(a))
	{
		l=strlen(a);
		
		for(i=0; i<l; i++)
		{
			f[(int)a[i]]++;
		}
		
		for(j=0; j<129; j++)
		{
			if(f[j]!=0)
			{
				cout<<j<<" "<<f[j]<<endl;
			}
		}
		cout<<endl;
	}
	
	return 0;;
}
