#include<bits/stdc++.h>

using namespace std;

int main()
{
	string l,ll;

	while(getline(cin,l) && getline(cin,ll))
	{
		
		set<string>s1,s2;
		string num;
		istringstream str1(l.c_str());

		while(str1>>num)
		{
			s1.insert(num);
		}

		istringstream str2(ll.c_str());

		while(str2>>num)
		{
			s2.insert(num);
		}

		set<string>:: iterator it,ix;

		int ab=0;

		for(it=s1.begin(); it !=s1.end(); it++)
		{
			ix=s2.find(*it);
			if(ix!=s2.end()) ab++;
		}

		int ba=0;

		for(it=s2.begin(); it!=s2.end(); it++)
		{
			ix=s1.find(*it);
			if(ix!=s1.end()) ba++;
		}

			if(ab==0 && ba==0)  cout<<"A and B are disjoint"<<endl;
				else if(ab==ba && (ab==s1.size() && ba==s2.size()))  cout << "A equals B" << endl;
					else if(ab==s1.size() && (s1.size()<s2.size()))  cout << "A is a proper subset of B" << endl;
						else if(ba==s2.size() && (s2.size()<s1.size()))  cout << "B is a proper subset of A" << endl;
							else cout << "I'm confused!" << endl; 

	}

	return 0;
}