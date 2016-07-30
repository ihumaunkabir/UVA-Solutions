#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<cstring>
#include<iomanip>
#include<cstdio>

using namespace std;

int main()
{
	char name1[25];
	char name2[25];
	memset(name1,0,25);
	memset(name2,0,25);
	
	int len1;
	int i,j,len2,s1,s2;
	int sum1;
	int sum2;
	double ratio;
	
	while(gets(name1))
	{
		gets(name2);
		len1=strlen(name1);
		len2=strlen(name2);
		sum1=0;
		sum2=0;
		s1=0;
		s2=0;
		
		for(i=0; i<len1; i++)
		{
			if(name1[i]>='a'&& name1[i]<='z')
            sum1+=name1[i]-96;
            else if(name1[i]>='A'&& name1[i]<='Z')
            sum1+=name1[i]-64;
		}
		
			for(i=0; i<len2; i++)
		{
			if(name2[i]>='a'&& name2[i]<='z')
            sum2+=name2[i]-96;
            else if(name1[i]>='A' && name1[i]<='Z')
            sum2+=name2[i]-64;
		}
		if(sum1==0 && sum2==0)
		{ cout<<"100.00 %"<<endl;}
		else {
		 while(sum1!=0)
        {
            s1+=sum1%10;
            sum1/=10;
        }
            if(s1>9)
            {
              sum1=s1;
              s1=0;
                while(sum1!=0)
                {
                    s1+=sum1%10;
                    sum1/=10;
                }
            }
            
        while(sum2!=0)
        {
            s2+=sum2%10;
            sum2/=10;
        }
            if(s2>9)
            {
              sum2=s2;
              s2=0;
                while(sum2!=0)
                {
                    s2+=sum2%10;
                    sum2/=10;
                }
            }
            
		
		if(s1>s2)
        ratio=(float)s2*100/(float)s1;
        else
        ratio=(float)s1*100/(float)s2;
        
		cout<<setprecision(2)<<fixed<<ratio<<" %"<<endl;
		
		
			
		}
		
		
	}
	return 0;
}
