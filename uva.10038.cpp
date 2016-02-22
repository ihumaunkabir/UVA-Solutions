#include<bits/stdc++.h>
#include<cstdlib>

using namespace std;

int main()
{
	int a[3000],b[3000],i,c,n;
	
	while(cin>>n)
	{
		c=1;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<n-1; i++)
		{
			b[i]=abs(a[i+1]-a[i]);
		}
		sort(b,b+i);
		for(i=1; i<n; i++)
		{
		if(b[i]==b[i-1])
		{
			c=0;
			break;
			}	
		}
		if(c==0) cout<<"Not jolly"<<endl;
		else cout<<"Jolly"<<endl;
	}
}
