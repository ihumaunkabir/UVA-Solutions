#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	char a[128];
	int t,i,j;
	int fb,sb,ffb,fsb;
	
	while(cin>>t)
	{
		
		while(t--)
		{
			
		fb =0;
		sb=0;
		ffb = 0;
		fsb =0;
		cin>>a;
		j = strlen(a);
		
		for(i=0; i<j; i++)
		{
			if(a[i]=='(') fb+=1;
			else if(a[i]==')') sb+=1;
			else if(a[i]=='[') ffb+=1;
			else if(a[i]==']') fsb+=1;
		}
		
		if((fb==sb) && (ffb==fsb)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		
		}
		
	}
}
