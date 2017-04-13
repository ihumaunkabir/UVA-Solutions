#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll card(ll n)
{
	ll m;
	if(n==1) return n;
	if(n%2==0) {
		m= (2*card(n/2)-1);
	}
	else m= (2*card(n/2)+1);
	
	return m;
}

int main()
{
	ll n,r;
	
	while(cin>>n)
	{
		if(n==0) break;
		
		if(n==1) {
			cout<<1<<endl;
			continue;
		}
		
		if(n%2==0) r = card(n) -1;
		if(n%2==1) r = card(n) -1;
		
		
		cout<<r<<endl;
		
	}
	return 0;
}


//wa

