#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll fynman(ll n)
{
	if(n==0) return 0;
	else return n*n + fynman(n-1);
}

int main()
{
	ll n;
	
	while(cin>>n && n)
	{
		ll f=fynman(n);
		cout<<f<<endl;
	}
	
	return 0;
}
