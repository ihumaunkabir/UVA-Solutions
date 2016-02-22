#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double a,b,c,d;
	int i,sum;
	double m,m1;
	m=7.00;
	m1=125.00;
	
	cin>>i;
	
		sum=0;
		while(i--)
		{ 
			
			cin>>a>>b>>c>>d;
			 if(((a<=56&&b<=45&&c<=25)||(a+b+c<=125))&&d<=7) {
			cout<<"1"<<endl;
			sum++;
			}
			
			else{

			cout<<"0"<<endl;
		}
		
		}
		cout<<sum<<endl;
	
	return 0;
}
