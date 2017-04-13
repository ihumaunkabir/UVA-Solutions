#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll a[13],b[13];
	int i,t,n;
	
	a[2]=1;
	a[3]=2;
	
	for(i=4; i<=12; i++)
	{
		a[i] = (i-1) * (a[i-1]+a[i-2]);
	}
	
	b[0]=1;
	
	for(i=1; i<=12; i++)
	{
		b[i]=i* b[i-1];
	}
	
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			cout<<a[n]<<"/"<<b[n]<<endl;
		}
	}
}
