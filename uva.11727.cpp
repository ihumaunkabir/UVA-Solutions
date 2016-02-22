#include<iostream>

using namespace std;

int main()
{
	long long n;
	int i,j;
	long long a,b,c;

	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cin>>a>>b>>c;

		
		if((a>b && a<c) || (a<b && a>c)){
			cout<<"Case "<<i<<": "<<a<<endl;
		}
			else if((b>a && b<c) || (a>b && b>c)){
				cout<<"Case "<<i<<": "<<b<<endl;
			}
				else if((c>a && c<b)|| (c<a && c>b)){
				cout<<"Case "<<i<<": "<<c<<endl;
			}
		
	}
	
	return 0;	
}
