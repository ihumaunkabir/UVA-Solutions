#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{	ll a[50005];
	a[1]=1;
	for(ll i=2; i<=50005; i++)
	{
		a[i]=a[i-1]+(i*i*i);
	}

	ll n;
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}