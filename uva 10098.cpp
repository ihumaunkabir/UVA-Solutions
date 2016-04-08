#include<bits/stdc++.h>

using namespace std;

int main()
{
	char a[11];
	int n;
	
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a;
			int l = strlen(a);
			sort(a,a+l);
			
			do{
				cout<<a<<endl;
			}
			while(next_permutation(a,a+l));
			cout<<endl;
			
		}
	}
	
	return 0;
}
