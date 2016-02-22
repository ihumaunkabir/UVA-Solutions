#include<iostream>
#include<cmath>

using namespace std;

int aa[1000000];

int main()
{
	int a;
	int max;
	int i,sum;
	while(cin>>a)
	{
		max=0;
		sum=0;
		for(i=0; i<a; i++)
		{
			cin>>aa[i];
			if(aa[i]>max)
			{
				max=aa[i];
				sum=sum+1;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
