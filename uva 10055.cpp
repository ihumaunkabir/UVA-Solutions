#include<iostream>

using namespace std;

int main()
{
	long long a,b,c;
	
	while(cin>>a)
	{
		cin>>b;
		c= a-b;
		if(c<0) c= c * -1;
		cout<<c<<endl;
	}
	
	return 0;
}
