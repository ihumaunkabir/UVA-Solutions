#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll w [7500];
void count ()
{
    int c [] = { 2000, 1000, 400, 200, 100 , 40, 20, 10, 4, 2 ,1 };
    w [0] = 1;
    
    for ( int i = 0; i < 11; i++ )
    
        for ( int j = c [i]; j < 7500; j++ )
        
            w [j] += w [j - c [i]];
}

main ()
{
    count ();
    ll n;
    double d;
    while ( cin >> d )
    {
    	
        n = d*20;
        if(n == 0)
        break;
        cout << setw(6) << fixed << setprecision(2) << d << setw(17) << w[n] << '\n';
    }
}
