#include<iostream>
#include<cmath>

using namespace std;

int isPerfect(int n)
{
	/*int prime[6]={2,3,5,7,13,17},i;
	for(i=0; i<6; i++)
	{
		if(prime[i]==n){
			return true;
			break;
		}
	}
	
	return false;*/
	
	if(n==2 || n==3 || n==5 || n==7 || n==13 || n==17) return true;
	else return false;
	
}

int main()
{
	int n,i,p,j,m;
	char com;
	
	
	while(cin>>n)
	{
		
		for(i=0; i<n; i++)
		{
			
			cin>>p;
			cin>>com;
			
			if(isPerfect(p)) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;

				}
	}
	return 0;
}
