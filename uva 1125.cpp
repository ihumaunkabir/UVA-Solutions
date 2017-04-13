#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int n,i,a[10],digit,t;

	
	while(cin>>t)
	{
		while(t--)
	{
			memset(a,0,sizeof(a));
			cin>>n;
			for(int j=1; j<=n; j++)
			{
				int temp=j;
			
		while(temp)
		{
			digit=temp%10;
			a[digit]++;
			temp=temp/10;
		}
		
		
	}
	
	for(i=0; i<10; i++)
		{
			if(i<9)
			cout<<a[i]<<" ";
			else cout<<a[i]<<endl;
		}
		
	}

}
	return 0;
}
