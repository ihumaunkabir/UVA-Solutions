#include<iostream>
using namespace std;


int catalan(int n)
{

	if (n <= 1) return 1;

	int res = 0;
	for (int i=0; i<n; i++)
		res += catalan(i)*catalan(n-i-1);

	return res;
}

int main()
{
	int n;
	bool b=false;
	while(cin>>n)
{
	if(b) cout<<endl;
	b=true;
		cout<<catalan(n)<<"\n";
}
	
	return 0;
}

