#include<bits/stdc++.h>
#define ll long long

using namespace std;
long long digit[10+1];

bool arm(ll n)
{
	ll total,hold,ind=0;;
	
	hold=n;
	while(hold)
	{
		digit[ind++]=hold%10;
		hold = hold/10;
	}
	total=0;
	for(ll i=0; i<ind; i++ )
	{
		total+=pow(digit[i],ind);
	}
	
	if(total==n) return true;
	else return false;
}

int main()
{
	
	ll t,n;
	bool b;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			b=arm(n);
			
			if(b) cout<<"Armstrong"<<endl;
			else cout<<"Not Armstrong"<<endl;
		}
	}
	return 0;
}
