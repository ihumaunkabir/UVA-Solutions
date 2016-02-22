#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int t,n,i,j,k,l,bang,ww,tie,aa;
	char word[11];
	i=1;
	
	cin>>t;
	while(t--)
	{
		bang=0;
		ww=0;
		tie=0;
		aa=0;
		
		cin>>n;
		cin>>word;
		
		for(j=0; j<n; j++)
		{
			if(word[j]=='W') ww++;
				else if(word[j] == 'A') aa++;
					else if(word[j]=='B') bang++;
						else if(word[j]=='T') tie++;
		}
		
	
			if(aa==n) cout<<"Case "<<i<<": ABANDONED\n";
				else if((ww+aa) == n || ww == n && n!=aa) cout<<"Case "<<i<<": WHITEWASH\n";
					else if((bang + aa) == n || bang == n && aa!=n) cout<<"Case "<<i<<": BANGLAWASH\n";
						else if(bang>ww) cout<<"Case "<<i<<": BANGLADESH "<<bang<<" - "<<ww<<"\n";
							else if(ww>bang) cout<<"Case "<<i<<": WWW "<<ww<<" - "<<bang<<"\n";
							else if(bang==ww && n!=aa) cout<<"Case "<<i<<": DRAW "<<bang<<" "<<ww<<"\n";
							
							i++;
		
		
	}
	
	return 0;
}
