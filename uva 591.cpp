#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main()
{
	int a[51];
	int sum,moves;
	int i,kase=1,max;
	int n,e;
	
	while(cin>>n)
	{
		if(n==0) break;
		sum=moves=0;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		max=sum/n;
		
		for(i=0; i<n; i++)
		{
			if(a[i]>max)
			{
				moves+=a[i]-max;
			}
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", kase, moves);
		kase++;
		
		
	}
	return 0;
}
