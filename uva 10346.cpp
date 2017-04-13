#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,temp,sum;
	
	while(cin>>n>>k)
	{
		temp=n;
		while(n>=k)
		{
			temp=temp+(n/k);
			n=n/k + (n%k);
		}
		cout<<temp<<endl;
	}
}
