#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	
	string a;
	while(cin>>a)
	{
		if(a=="0") break;
		int l,num;

		l=a.length();
		num=a[0]-'0';
		if(l>1 && l%2==0) num = num*10 + a[1]-'0';

		l = (l-1)/2;
		cout<<int(sqrt(num));

		for(int i=0; i<l; i++){
			cout<<0;
		}
		cout<<endl;
		
	}

	return 0;

}