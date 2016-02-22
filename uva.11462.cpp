#include<iostream>
#include<vector>



using namespace std;

int main()
{
	long long n,h;

	while(cin>>n){
		
		if(n==0) break;
		
		vector<int> coll;
		unsigned int i;
		
		for(i=1; i <= n; ++i)
		{
			cin>>h;
			coll.push_back(h);
		}
	
			vector<int>::iterator iter;
		 for( iter = coll.end(); iter != coll.begin(); iter-- ) {
                cout << *iter <<" ";
        }
		
	
	}
	
return 0;
}
