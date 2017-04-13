#include<bits/stdc++.h>
#define ll long long
#define kase(i) printf("Case %d: ",i)

using namespace std;

int main()
{
	ll a,b,c,i;
	int j=1;

	while(cin>>a>>b)
	{
		c=a;
		if(a<0 && b<0) break;

		for(i=1;;i++)
		{
			if(a==1) break;

			if(a%2==0) a=a/2;
			else a=3*a+1;

			if(a>b) break;
		}

		kase(j);
		cout<<"A = "<<c<<", Limit = "<<b<<", number of terms = "<<i<<endl;
		j++;

	}

	return 0;
}