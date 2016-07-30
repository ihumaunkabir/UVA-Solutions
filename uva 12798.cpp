#include<iostream>

using namespace std;

int main()
{
	long long m,n,a,i,j;
	long long count;
	
	while(cin>>m>>n)
	{
		//cin>>n;
		count=0;
		for(i=0; i<m; i++)
		{
			a=0;
			bool mg = false;
		
			for(j=0; j<n; j++)
			{
				cin>>a;
				if(!a) mg=true;
				
			}
			if(!mg) count++;
		}
		cout<<count<<endl;
	}
	return 0;
	
}
