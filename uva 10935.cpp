#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	queue<ll>card;
	ll n,temp;
	
	while(cin>>n)
	{
		if(n==0) break;
		
		for(ll i=1;  i<=n; i++)
		{
			card.push(i);
		}
		cout<<"Discarded cards:";
		while(card.size() > 1)
		{
			cout<<" "<<card.front();
			card.pop();
			temp = card.front();
			card.pop();
			if(!card.empty())
			{
				cout<<",";
			}
			card.push(temp);
			
		}
		cout<<endl<<"Remaining card: "<<card.front()<<endl;
		card.pop();
	}
	
	return 0;
}
