#include <iostream>
using namespace std;
int main()
{
    long long dec,rem,i=1,sum=0;
    while(cin>>dec)
    {
    	do
    {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
    }while(dec>0);
    
    cout<<sum<<endl;
    sum=0;

	}
    
 
    return 0;
}
