#include<iostream>

using namespace std;

int main()
{
	long long n,i,a,b,c;
	
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a>>b>>c;
		
		if(a<=20 && b<=20 && c<=20)
		{
			cout<<"Case "<<i+1<<": good"<<endl;
		}
		else {
			cout<<"Case "<<i+1<<": bad"<<endl;
		}
	}
}
