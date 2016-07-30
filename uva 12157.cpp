#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int tc,n,sec,mile,juice;
	int kase;
	
	while(cin>>tc)
	{
		kase=1;
		while(tc--)
		{
			cin>>n;
			mile=juice=0;
			while(n--)
			{
				cin>>sec;
				
				mile+=(sec/30) * 10 + 10;
				juice+=(sec/60) * 15 + 15;
				
			}
			
			if(mile<juice) cout<<"Case "<<kase<<": "<<"Mile "<<mile<<endl;
			else if(juice<mile) cout<<"Case "<<kase<<": "<<"Juice "<<juice<<endl;
			else if(mile==juice) cout<<"Case "<<kase<<": "<<"Mile Juice "<<mile<<endl;
			
			kase++;
		}
	}
	return 0;
}
