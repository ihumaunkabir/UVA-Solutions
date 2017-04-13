#include<bits/stdc++.h>
#include<algorithm>
#define ll long long

using namespace std;


int main()
{
	ll a[5842+1];
	ll n;
	ll  two,three,five,seven;
	memset(a,0,sizeof(a));
	
	two=three=five=seven=0;
	a[0]=1;
	for(ll i=1; i<=5842+1; i++)
	{
		a[i]=min(min(2*a[two],3*a[three]),min(5*a[five],7*a[seven]));
		
		if(a[i]==2*a[two]) two++;
		if(a[i]==3*a[three]) three++;
		if(a[i]==5*a[five]) five++;
		if(a[i]==7*a[seven]) seven++;
	}
	
	while(cin>>n && n)
	{
		cout<<"The "<<n;
		if(n%100>=10 && n%100<=19) cout<<"th humble number is ";
		else if(n%10==1) cout<<"st humble number is ";
		else if(n%10==2) cout<<"nd humble number is ";
		else if(n%10==3) cout<<"rd humble number is ";
		else cout<<"th humble number is ";
		
		cout<<a[n-1]<<"."<<endl;
	}
}

