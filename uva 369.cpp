#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll combi(ll n,ll m)
{
	ll r,i;
	r=1;
	if(n-m<m) m=n-m;
	
	for(i=1; i<m+1; i++,n--)
	{
		r=r*n;
		r=r/i;
	}
	
	return r;
}

int main()
{
	ll m,n;
	ll c;
	
	while(cin>>n>>m)
	{
		if(n==0 && m==0) break;
		c=combi(n,m);
		cout<<n<<" things taken "<<m<<" at a time is "<<c<<" exactly."<<endl;
	}
	
	return 0;
}
