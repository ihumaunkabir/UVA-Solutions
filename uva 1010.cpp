#include<stdio.h>
#include<math.h>

int main()
{
    long long n,a;
   	while(scanf("%lld",&n) == 1){
    
       		 if(n==0)
      		 break;
       		 a=sqrt(n);
     					if(a*a == n)
      							printf("yes\n");
      								else
      									  printf("no\n");
											
							}
							
    return(0);
}
