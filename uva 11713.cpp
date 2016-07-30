#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

#define dbug(x) cout<<">"<<x<<endl;



int main()
{
	int i,j,n,vowel,con;
	vector<char>s1,s2;
	string a,a1;
	
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a;
			cin>>a1;
			
			int len=a.length();
			int len1=a1.length();
			
				s1.clear();
				s2.clear();
				vowel=0;
	
			if(len==len1)
			{
				for(i=0; i<len; i++)
				{
					
				 if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (a1[i]=='a' || a1[i]=='e' || a1[i]=='i' || a1[i]=='o' || a1[i]=='u')) {
				 	//nothing :D
				 }
				 
				 else {
				 	s1.push_back(a[i]);
				 	s2.push_back(a1[i]);
				 }

				}
				
				for(j=0; j<s1.size(); j++)
				{
					if(s1[j]==s2[j]) vowel++;
				}
				
					if(vowel==s1.size()) cout<<"Yes"<<endl;
					else cout<<"No"<<endl;
				
			}
			
			else cout<<"No"<<endl;
		}
		
	}
	
	return 0;
}
