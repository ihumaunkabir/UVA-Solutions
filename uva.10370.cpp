#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	int n,t,i;
	long long a[1000];
	long long sum=0;
	int count=0;
	double per,res;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			sum=sum+a[i];
			
		}
		
		per = (float)sum/(float)n;
		for(i=0; i<n; i++)
		{
			if(a[i]>per) count=count+1;
		}
		res=((float)count * 100) / (float)n;
		cout<<setprecision(3)<<fixed<<res<<"%"<<endl;
		sum=0;
		count=0;
	}
}
