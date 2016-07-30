#include<iostream>

using namespace std;

int main()
{
	long long n;
	while(cin>>n)
	{
		
		if(n%15==0)
		{
			if(n%4==0 || n%400==0)
			{
				cout<<"This is leap year."<<endl;
				cout<<"This is huluculu festival year."<<endl;
				cout<<endl;
			}
			else cout<<"This is huluculu festival year.\n"<<endl;
		}
		else if(n%4==0 || n%400==0)
		{
			if(n%55==0){
				cout<<"This is leap year."<<endl;
				 cout<<"This is bulukulu festival year.\n"<<endl;
			}
			else cout<<"This is leap year.\n"<<endl;
		}
		else if((n%4==0||n%400==0) && n%55==0 && n%15==0)
		{
			cout<<"This is leap year."<<endl;
			cout<<"This is huluculu festival year."<<endl;
			cout<<"This is bulukulu festival year."<<endl;
			cout<<endl;
		}
		else{
			cout<<"This is an ordinary year."<<endl;
		}
	}
	
	return 0;
}
