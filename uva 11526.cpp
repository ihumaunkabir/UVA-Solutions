#include<iostream>
using namespace std;

long long H(int n){
				long long res = 0;
				for( int i = 1; i <= n; i++ )
				{
					res = (res + n/i);
						}
			return res;
		}

int main()
{
	long long result;
	int a;
	int t;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>a;
			result = H(a);
			cout<<result<<endl;
		}
	}
	return 0;
}
