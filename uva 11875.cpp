#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,t,c;
	int v[100];
	while(cin>>t)
	{
		c=1;
		while(t--)
		{
			cin>>n;
			for(i=0; i<n; i++)
			{
				cin>>v[i];
			}
			sort(v,v+n);
			int res=n/2;
			cout<<"Case "<<c<<": "<<v[res]<<endl;
			c++;
		}
	}
	return 0;
}
