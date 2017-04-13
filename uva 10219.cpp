#include<bits/stdc++.h>
#include<cmath>
#define ll long long

using namespace std;

int main()
{
	 unsigned ll n,k;
	 long double sum;
	 
	while(cin>>n>>k)
	{
		sum=0;
		
		for( unsigned ll i=n-k+1; i<=n; i++)
		{
			sum+=log10((double)i);
		}
		
			for( unsigned ll j=1; j<=k; j++)
			{
				sum-=log10((double)j);
			}
			
			cout<<(ll)sum+1<<endl;
		}	
	return 0;
}
