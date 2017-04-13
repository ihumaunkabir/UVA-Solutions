#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll a[21];
void precal(){

    for(int i=0; i< 21 ;i++) a[i]= ( (i+1) * (i+1) * (i+1) );

}

ll count( ll S[], ll m, ll n )
{
	ll i, j, x, y;
	ll table[n+1][m];

	for (i=0; i<m; i++)
		table[0][i] = 1;
	for (i = 1; i < n+1; i++)
	{
		for (j = 0; j < m; j++)
		{
			x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
			y = (j >= 1)? table[i][j-1]: 0;
			table[i][j] = x + y;
		}
	}
	return table[n][m-1];
}



int main(){

 precal();

//cout<<a[20];
 ll n,ans;

    while(cin >> n){

        ans = count(a,21,n);
        cout<< ans << '\n';
    }


 return 0;
}
