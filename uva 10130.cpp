#include<bits/stdc++.h>

using namespace std;

int knap(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}

int main(){
	
	int t,n,sum;
	int p[1000+1],w[1000+1];
	int gn,g;
	
		cin>>t;
		while(t--){
			
			sum=0;
			cin>>n;
			for(int i=0; i<n; i++){
				
				cin>>p[i];
				cin>>w[i];
			}
			
			cin>>gn;
			for(int j=0; j<gn; j++){
				cin>>g;
				sum+=knap(g,w,p,n);
			}
			
			cout<<sum<<'\n';
		}
	
	
	return 0;
}

