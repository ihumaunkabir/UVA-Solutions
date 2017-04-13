#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll x, y;
	
	int j,k;
	
	while(cin>>x>>y)
	{
			if(x==0 || y==0) break;
			
			vector<ll>a;
			vector<ll>b;
			vector<ll>c;
			
		j=k=0;
		if(x>y) swap(x,y);
		
		for(ll i=x; i<=y; i++ )
		{
			
			ll ti=0;
			ll tn=i;
			
			if(i==1)
			{
				ti=3;
			}
			
			else {
				while(tn!=1)
			{
				if(tn%2==0){
					 tn= tn/2;
					 ti++;
				}
				else {
					tn=3*tn+1;
					ti++;
				}
			}
			}
			
			a.push_back(i);
			b.push_back(ti);
			c.push_back(ti);
			
		}
			sort(b.begin(),b.end());
		
			for(ll l=0; l<c.size(); l++)
			{
				if(b[b.size()-1]==c[l]) {
					
					cout<<"Between "<<x<<" and "<<y<<", "<<a[l];
					cout<<" generates the longest sequence of "<<b[b.size()-1]<<" values."<<endl;
					break;
				}
			}
	
	}
	return 0;
}
