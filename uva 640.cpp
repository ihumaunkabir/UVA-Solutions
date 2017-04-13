#include<bits/stdc++.h>
#define M 1000000+1
#define ll long long

using namespace std;

int main()
{
	long long temp,sum,i;
	bool ans[M]={false};
	
	for(i=1; i<M; i++)
	{
		temp=i;
		sum=i;
		
		while(temp!=0)
		{
			sum+=temp%10;
			temp=temp/10;
			}	
			
			if(sum<M) ans[sum]=true;
	}
	
	for(i=1; i<M; i++)
	{
		if(!ans[i]) cout<<i<<endl;
	}
	
	
	return 0;
}
