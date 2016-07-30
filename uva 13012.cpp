#include<iostream>

using namespace std;

int main()
{
	int n,i,a[5];
	int sum=0;
	
	while(cin>>n)
	{
		for(i=0; i<5; i++)
		{
			cin>>a[i];
			if(a[i]==n) sum=sum+1;
		}
		cout<<sum<<endl;
		sum=0;
	}
	
	return 0;
}
