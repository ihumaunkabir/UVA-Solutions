#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

	long long N,x;

	while(cin>>N)
	{
		x = 2*(((N/2)+1)*((N/2)+1)) -3;
		cout<<3*x<<endl;
	}

	return 0;
}