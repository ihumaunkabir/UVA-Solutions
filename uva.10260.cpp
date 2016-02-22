#include<bits/stdc++.h>

using namespace std;

int main()
{
	char s[20];
	int i,l;

	
	while(gets(s))
	{
		l = strlen(s);
		for(i=0; i<l; i++)
		{
			if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')
			{
				if(s[i-1]!='B' && s[i-1]!='P' && s[i-1]!='F' && s[i-1]!='V') cout<<"1";
			}
			else if(s[i]=='C' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z' || s[i]=='G')
			{
				if(s[i-1]!='C' && s[i-1]!='J' && s[i-1]!='K' && s[i-1]!='Q' && s[i-1]!='S' && s[i-1]!='X' && s[i-1]!='Z' && s[i-1]!='G') cout<<"2";	
			}
			else if(s[i]=='D' || s[i]=='T')
			{
				if(s[i-1]!='D' && s[i-1]!='T') cout<<"3";
			}
			
			else if(s[i]=='L')
			{
				if(s[i-1]!='L') cout<<"4";
			}
			else if(s[i]=='M' || s[i]=='N')
			{
				if(s[i-1]!='M' && s[i-1]!='N') cout<<"5";
			}
			else if(s[i]=='R')
			{
				if(s[i-1]!='R') cout<<"6";
			}
			
		}
		cout<<"\n";
		
	
	}
	
	return 0;
}
