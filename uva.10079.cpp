#include<iostream>
using namespace std;

int main()
{
	long long n;
	while(cin>>n)
	{
		if(n<0) break;
		long long a;
		a = (n*(n+1)/2)+1;
		cout<<a<<endl;
	}
}
