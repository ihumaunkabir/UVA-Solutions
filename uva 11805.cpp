#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,p;
	int i=1,t;
	
	cin>>t;
	
	while(t--){
		cin>>n>>k>>p;
		printf("Case %d: ",i++);
		int d;
		d=(k+p)%n;
		
		if(d==0) cout<<n<<'\n';
		else cout<<d<<'\n';
	}
	return 0;
}
