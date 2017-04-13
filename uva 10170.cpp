#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll s,d,n,i;

	while(cin>>s>>d)
	{
		n=0;
		for(i=s;;i++){

			n+=i;
			if(n>d || n==d) {
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}