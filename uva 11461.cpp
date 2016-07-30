#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long long i,j,d;
	float sq;
	int sum,t,m;
	while(cin>>t)
	{
			for(m=0; m<t; m++)
	{
		cin>>i;
		cin>>j;
		
		if(i==0 && j==0) break;
		sum=0;

		if(i<j){
			for(d=i; d<=j; d++)
			{
				sq=sqrt(d);
				if((float)sq - (int)sq==0){
				sum+=1;}
				
			}
			cout<<sum<<endl;
		}
		else {
				for(d=j; d<=i; d++)
			{
				sq=sqrt(d);
				if(((float)sq-(int)sq)==0) {
				sum+=1;}
				
			}
			cout<<sum<<endl;
			
		}
	}
	}
	return 0;
}
