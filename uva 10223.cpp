#include<bits/stdc++.h>
#define ll long long
#define dbug(x) cout<<">"<<x<<endl;

using namespace std;

int main()
{
	long long trs;
	long long node;
	long long catNum[20+1] = {1,2,5,14,42,132,429,1430,4862,16796,58786,208012,742900,2674440,9694845,35357670,129644790,477638700,1767263190};
	
	while(cin>>trs)
	{
			node=0;
	for(int i=0; i<20+1; i++)
	{
		if(catNum[i]==trs) {
			node=i;
			break;
		}
	}
	cout<<node+1<<endl;
	}

	return 0;
}
