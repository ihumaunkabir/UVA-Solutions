#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(ll n)
{
	ll d= sqrt(n);
	for(ll i=2; i<=d; i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	ll n;
	bool b,c;

	while(cin>>n)
	{
			b=false;
			c=false;
	
		b=isPrime(n);
		
		if(b)
		{
			ll rn =0;
            for(ll i =n;i!=0;i=i/10){
                rn = rn*10+i%10;
				}
				
			c= isPrime(rn);
			
			if(c && rn!=n) cout<<n<<" is emirp."<<endl;
			else cout<<n<<" is prime."<<endl;
		}
		
		else cout<<n<<" is not prime."<<endl;
	}
}
