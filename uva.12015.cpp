#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int a[10],n,i,j,t,k;
	int d=1;
	j=0;
	char bb[10][100];
	
	cin>>t;
	
	while(t--)
	{
		for(i=0; i<10; i++)
		{
			cin>>bb[i];
			cin>>a[i];
			if(a[i]>j){
				j=a[i];
			}
		}
		
		cout<<"Case #"<<d<<":\n";
		
		for(i=0; i<10; i++)
		{
			if(a[i]==j){
				cout<<bb[i]<<endl;
			}
		}
		
		
		d++;
		j=0;
	}
	
	
}
