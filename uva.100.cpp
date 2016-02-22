#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int i,j;
	while(cin>>i)
	{
		cin>>j;
		int ti = i;
		int tj = j;
		if(i>j) swap(i,j);

		int mc,mxc;
		mxc =0;
		
		while(i<=j)
		{
			mc=1;
			unsigned int n = i;
			
			while(n!=1)
			{
				if(n%2==1) n = 3 *n +1;
				else n = n/2;
				mc++;
			}
			if(mc>mxc)
			{
				mxc = mc;
			}
			i++;
		}
		cout<<ti<<" "<<tj<<" "<<mxc<<endl;
		cout<<ti<<" "<<tj<<" "<<mxc<<endl;
	}
	return 0;
}
