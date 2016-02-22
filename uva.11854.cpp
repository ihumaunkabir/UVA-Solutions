#include<iostream>

using namespace std;

int main()
{
	long long a,b,c;
	
	while(cin>>a>>b>>c)
	{
		if(a==0 && b==0 && c==0) break;
		
		if(a*a==b*b+c*c || b*b==a*a + c*c || c*c==b*b + a*a){
			cout<<"right"<<endl;
		}
		else{
			cout<<"wrong"<<endl;
		}
		}
	
	return 0;
}
