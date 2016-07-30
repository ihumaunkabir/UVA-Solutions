#include<iostream>

using namespace std;

int main()
{
	long long n,a,b,c,d,i,l;
	
while(	cin>>n){

	

	
		for(i=1; i<=n; i++)
		{
			cin>>a>>b;
			
			if(a-b<0){
				cout<<"impossible"<<endl;
			}
			else{
				a= a/2;
				b=b/2;
				c= a - b;
				d= a + b;
				if(d>c){
				cout<<d<<" "<<c<<endl;
			}
				else {
					cout<<c<<" "<<d<<endl;
				}
				
			}
			
		}
		
		
		
	
}
	return 0;
}
