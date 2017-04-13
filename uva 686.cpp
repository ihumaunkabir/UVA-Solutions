#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n)
{
	for(ll i=3; i<=(ll)sqrt(n); i++)
	{
		if(n%i==0) return false;
	}
	
	return true;
}

int main()
{
	ll n,fp,lp,a,ans,i,j;
	bool fip,sep;
	
while(cin>>n)
{
	if(n==0) break;
	ans=0;
	for(i=3; ; i+=2)
	{
		fp=i;
		lp=n-i;
		fip=true;
		sep=true;
		j=i;
		
		if(fp>lp) break;
		if(fp%2!=0)
		{
			fip=isPrime(fp);
			
			if(fip)
			{
				if(lp%2!=0)
				{
					sep=isPrime(lp);
					if(sep)
					{
						ans++;
					}
				}
			}
		}
	}

	
	if(n==4) cout<<1<<endl;
	else cout<<ans<<endl;
}
	return 0;
}
