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
	
	int t,n,w,d,ans,sum;
	
	while(cin>>t){
		
		while(t--){
			
			sum=0;
			cin>>n;
			int wt[100+1],val[100+1];
			memset(wt,0,101);
			memset(val,0,101);
			
			for(int i=0; i<n; i++){
				cin>>wt[i];
				val[i]=wt[i];
				sum+=wt[i];
			}
		
			w = sum/2;
			d = knap(w,wt,val,n);
			ans=sum - 2*d;
			cout<<ans<<'\n';
			
		}
	}
	
	return 0;
}
