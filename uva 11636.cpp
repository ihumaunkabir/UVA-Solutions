#include<iostream>

using namespace std;

int main()
{
	long long a,b,i,j,sum;
		j=1;
	while(cin>>a)
	{
	
		if(a<0) break;
			sum=0;
		if(a==1) cout<<"Case "<<j<<": 0"<<endl;
		else{
			for(i=2; i<=a; i=i*2)
		{
			sum+=1;
		}
		b=a - i/2;
		if(b<i && b!=0) sum+=1;
		
		cout<<"Case "<<j<<": "<<sum<<endl;
			
		}
		j++;
	
		
	}
	
	
	return 0;
}
