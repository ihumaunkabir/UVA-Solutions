#include<iostream>

using namespace std;

#define debug(x) cout<<">"<<x<<endl;

int main()
{
	int t,p1,p2;
	string s;
	int n,i;
	string pos[101];
	
	while(cin>>t)
	{
		while(t--)
		{
			int tot=0;
			
			cin>>n;
			
			for(i=0; i<n; i++)
			{
				cin>>s;
				if(s=="LEFT")
				{
					tot-=1;
					pos[i]=s;
				}
				
				else if(s=="RIGHT")
				{
					tot+=1;
					pos[i]=s;
				}
				
				else{
					cin>>s;
					cin>>p2;
					
					if(pos[p2-1]=="LEFT")
					{
						tot-=1;
						pos[i]=pos[p2-1];
					}
					else if(pos[p2-1]=="RIGHT")
					{
						tot+=1;
						pos[i]=pos[p2-1];
					}
				}
			}
			
			cout<<tot<<endl;
		}
		
	}
	return 0;
}
