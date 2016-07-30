#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll egcd(ll a,ll b,ll &x,ll &y)
{
	ll gcd , x1,y1;
	
	if(a==0)
	{
		x=0;
		y=1;
		
		return b;
	}
	
	gcd = egcd(b%a,a,x1,y1);
	
	x=y1-(b/a)*x1;
	y=x1;
	
	return gcd;
}

int main()
{
		ll a,b,x,y,d;
	
	while(cin>>a)
	{
		cin>>b;
		
		d = egcd(a,b,x,y);
		
		if(a==b)
		{
			x=0;
			y=1;
		}
		
		cout<<x<<" "<<y<<" "<<d<<endl;
	}
	
	return 0;
}
