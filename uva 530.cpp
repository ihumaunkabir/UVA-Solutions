#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		if(n==0 && k==0) break;
		if(n-k<k) k=n-k;
		double a=1;
		for(int i=n,j=1; j<=k; j++,i--)
		{
			a = a*i;
			a= a/j;
		}
		cout<<(long long)a<<endl;
	}
	return 0;
}
