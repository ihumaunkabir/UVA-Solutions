#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j;
	int n,g;
		g=0;
	
	while(cin>>n)
	{
		if(n==0) break;
	
		
		for(i=1; i<n; i++)
		{
			for(j=i+1;j<=n; j++)
			{
				g+= __gcd(i,j);
			}
			
		}
		cout<<g<<endl;
		
		g=0;
		
		
	}
	return 0;
}
