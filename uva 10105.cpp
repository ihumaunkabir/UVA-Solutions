#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	int a[15];
	a[0]=1;

	for(int i=1; i<15; i++)
		a[i]=a[i-1]*i;

	while(cin>>n>>k)
	{
		int result=a[n];

		while(k--)
		{
			int x;
			cin>>x;
			result/=a[x];
		}

		cout<<result<<endl;
	}
	return 0;
}