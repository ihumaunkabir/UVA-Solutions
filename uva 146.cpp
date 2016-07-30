#include<bits/stdc++.h>

using namespace std;

int main()
{
	char s[100];
	
	while(cin>>s)
	{
		if(s[0] == '#') break;
		long long l=strlen(s);
		
		if(next_permutation(s,s+l))
		{
			cout<<s<<endl;
		}
		else cout<<"No Successor"<<endl;
	}
	
	return 0;
}
