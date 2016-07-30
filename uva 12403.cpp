#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	int a,t,i,j;
	int sum=0;
	char word[100];
	
	cin>>t;
	while(t--)
	{
		cin>>word;
		if(strcmp(word,"donate")==0)
		{
			cin>>a;
			sum=sum+a;
		}
		else cout<<sum<<endl;
	}
	
	return 0;
}
