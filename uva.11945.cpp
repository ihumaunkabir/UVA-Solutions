#include<iostream>
#include<iomanip>
#include<cmath>
#include <clocale>

using namespace std;

int main()
{
	long long t,i;
	long long j=1;
	double res,sum,a[12];
	
	while(cin>>t)
	{
		 setlocale(LC_ALL, "en_US.UTF-8");
		while(t--)
		{
			sum=0;
			for(i=0; i<12; i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			res = sum / (double) 12;
			cout<<setprecision(2)<<fixed<<j<<" $"<<res<<endl;
			j++;
			
		}
	}
	
	
	return 0;
}
