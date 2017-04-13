#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#define ll long long

using namespace std;

ll gcd(ll a,ll b)
{
	return b? gcd(b,a%b):a;	
}

ll lcm(ll a,ll b)
{
	return (a*b/gcd(a,b));
}

int main()
{
	ll n,sq,m,count;
	


	while(cin>>n)
	{
		vector<ll>fact;
		if(n==0) break;
		sq = sqrt(n);
		
		for(ll i=1; i<=sq; i++)
		{
			if(n%i==0)
			{
				fact.push_back(i);
				fact.push_back(n/i);
			}
		}
		
		if(sq*sq==n) fact.pop_back();
		
		count=0;
		ll vsize = fact.size();
		
		for(ll i=0; i<vsize; i++)
		{
			for(ll j=i; j<vsize; j++)
			{
				if(lcm(fact[i],fact[j])==n) count++;
			}
		}
		
		cout<<n<<" "<<count<<endl;

		
	}
}

