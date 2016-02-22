#include<stdio.h>
#include<math.h>

main()
{
	int i,c=0,a,b;
	int sum=0;
	
	while(c<201){
		scanf("%d %d",&a,&b);
		if(a==0  && b==0) break;
		
		 for(i=a; i<=b; i++){
		 	float sq = sqrt(i);
		 	if(sq -(int)sq==0) {
			 sum=sum+1;}
		 }
		 printf("%d\n",sum);
		sum=0;
		 
	}
}
