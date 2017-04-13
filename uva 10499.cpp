#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

	ll n,p;

	while(cin>>n)
	{
		if(n<0) break;
		p=(n*100)/4;
		if(n==1) cout<<0<<"%"<<endl;
		else cout<<p<<"%"<<endl;
	}

	return 0;
}