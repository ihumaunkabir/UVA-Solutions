#include<iostream>

using namespace std;

int main()
{
	int t,i,n;
	int c,c1,m;
	c=0; c1=0;
	m=1;
	
	while(cin>>t)
	{
		
		if(t==0) break;
		
		for(i=0; i<t; i++)
		{
			cin>>n;
			if(n==0) c1+=1;
			if(n>=1 && n<=99) c+=1;
		}
		cout<<"Case "<<m<<": "<<(c-c1)<<endl;
		
		c=0; c1=0;
		m++;
	}
}
