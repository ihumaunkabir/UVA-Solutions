#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	char hajj[10];
	int i;
	i=1;
	
	while(cin>>hajj)
	{
		if(strcmp(hajj,"*")==0) break;
		else if(strcmp(hajj,"Hajj")==0) cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
		else cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
		i++;
	}
}
