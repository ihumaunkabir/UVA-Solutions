#include<iostream>
#include<cmath>
#define ef else if

using namespace std;

int main()
{
	
	//not acccpeted or solve
	long long t,n,m,x,y;
	long long nx,ny;
	
	while(cin>>t)
	{
		if(t==0) break;
		cin>>n>>m;
		while(t--)
		{
			cin>>x>>y;
			nx = 
			if(x== n || y==m){
				 cout<<"divisa"<<endl;
			}
			else{
				
				if(x>=0 && y>=0) cout<<"NE"<<endl;
				ef(x>=0 && y<0) cout<<"SE"<<endl;
				ef(x<0 && y<0) cout<<"SO"<<endl;
				ef(x<0 && y>=0) cout<<"NO"<<endl;
			}
			
		}
	}
	
	return 0;
}
