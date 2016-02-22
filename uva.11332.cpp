#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	long long a;
	long long sum;
	long long s=0;
	
	while(cin>>a)
	{
		if(a==0) break;
	step:
		sum=0;
		s=0;
		while(a!=0)
		{
			sum+=a%10;
			a=a/10;
		}
		if(sum>9){
			a=sum;
			goto step;
		}
		else cout<<sum<<endl;
	}
	return 0;
}
