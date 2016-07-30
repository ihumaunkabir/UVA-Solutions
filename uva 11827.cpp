#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	
	if(a%b==0) return b;
	return gcd(b,a%b);
}

int main()
{
	
	int tc,N,a[99],ans;
	string s;
	
	while(cin>>tc)
	{
		getchar();
	while(tc--){
		
		N=0;
		ans=0;
		
		getline(cin,s);
		istringstream is(s);
	
		
		while(is>>a[N]){
			 ++N;
		}
		
		for(int i = 0;i<N;++i)
			for(int j = i+1;j<N;++j)
				ans = max(ans,gcd(a[i],a[j]));
		
		cout<<ans<<endl;
	}
	}
	
	
	
	return 0;
}
