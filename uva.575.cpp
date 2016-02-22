#include<iostream>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	string num;
	long long len,i;
	long long sum=0;
	long long j;
	j=1;
	
	while(cin>>num)
	{
		if(num=="0") break;
		len=num.length();
	
		for(i=len-1; i>=0; i--)
		{
			if(num[i]=='1') sum=sum + (pow(2,j)-1);
			else if(num[i]=='2') sum= sum+  (2 * (pow(2,j)-1));
			j++;
		}
		cout<<sum<<endl;
		sum=0;
		j=1;
		
		
	}
}
