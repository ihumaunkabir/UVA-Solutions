#include<iostream>
#include<cmath>

using namespace std;

long long a[1000];

int main()
{
	long long i,j,n,temp,digit;
	while(cin>>n)
	{ 
	
	temp=0;
	digit=0;
	
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(a[j]>a[j+1])
				{
					digit++;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		cout<<"Minimum exchange operations : "<<digit<<endl;
	}
}
