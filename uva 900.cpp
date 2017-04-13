#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll a[100],i,n;

	
	while(cin>>n)
	{
		if(n==0) break;
		memset(a,0,sizeof(a));
  		a[1]=1;
		a[2]=2;
		for(i=3; i<=n; i++)
		{
			a[i]= a[i-1]+a[i-2];
		}
		
		cout<<a[n]<<endl;
	}
}
