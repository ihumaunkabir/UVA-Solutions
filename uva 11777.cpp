#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	double t1,t2,f,aa,c1,c3,c2,c,cz;
	int n;
	double sum;
	while(cin>>n)
	{
		sum=0;
		cz=1;
		while(n--)
		{
			cin>>t1>>t2>>f>>aa>>c1>>c2>>c3;
			double a[3]={c1,c2,c3};
			sort(a,a+3);
			
			c= a[1]+ a[2];
			c = c /2;
			sum = t1+t2+f+aa+c;
			
			if(sum>=90) cout<<"Case "<<cz<<": A"<<endl;
			else if(sum>=80 && sum<90) cout<<"Case "<<cz<<": B"<<endl;
			else if(sum<80 && sum>=70) cout<<"Case "<<cz<<": C"<<endl;
			else if(sum>=60 && sum<70) cout<<"Case "<<cz<<": D"<<endl;
			else if(sum<60) cout<<"Case "<<cz<<": F"<<endl;
			cz++;
		}
		
	}
	return 0;
}
