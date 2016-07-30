#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#define x s[j]

using namespace std;

int main()
{
	long long i,j,n,max,l;
	long long s[1000];
	max=0;
	
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cin>>l;
			for(j=0; j<l; j++){
				cin>>s[j];
				if(s[j]>max){
					max=s[j];
				}
			}
			cout<<"Case "<<i+1<<": "<<max<<endl;
			max=0;
	}
	
	return 0;
}
