#include<bits/stdc++.h>
#include<iomanip>
#define ll long long

using namespace std;


ll count( ll S[], ll m, ll n )
{
	ll i, j, x, y;

	ll table[n+1][m];
	
	for (i=0; i<m; i++)
		table[0][i] = 1;

	for (i = 1; i < n+1; i++)
	{
		for (j = 0; j < m; j++)
		{
		
			x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
			y = (j >= 1)? table[i][j-1]: 0;
			table[i][j] = x + y;
		}
	}
	return table[n][m-1];
}


int main()
{
	ll a[] = {1,5,10,25,50};
	ll m = 5;
	ll n;
	
	while(cin>>n){
		ll ans;
		
		ans = count(a,m,n);
		
		cout<<ans<<'\n';
	}
	return 0;
}

