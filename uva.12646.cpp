#include<stdio.h>

int main()
{
	int a,b,c;
	
	while(scanf("%d %d %d",&a,&b,&c)==3)
	{
		
		if(a+b==2 && c==0) printf("C\n");
			else if(a+c==2 && b==0) printf("B\n");
					else if(b+c==2 && a==0) printf("A\n");
						else if(a+c+b==0) printf("*\n");
							else if(a+b+c==3) printf("*\n");
								else if(a+b==0 && c==1) printf("C\n");
									else if(a+c==0 && b==1) printf("B\n");
										else if(b+c==0 && a==1) printf("A\n");
	}
	return 0;
}
