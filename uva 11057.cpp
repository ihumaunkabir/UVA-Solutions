#include<iostream>
#include<cstdio>
#define pf printf

using namespace std;

long long a[100000];

int main()
{

    long long n,i,j,d,m;
    long long sn,bn;

    while(cin>>n)
    {
        d=1200000;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]+a[j]==m && i!=j)
            {
                if(a[i]>a[j])
                {
                    if(a[i]-a[j]<d)
                    {
                        sn=a[j];
                        bn=a[i];
                        d= a[i]-a[j];
                    }
                }
                else{
                    if(a[j]-a[i]<d)
                    {
                        sn=a[i];
                        bn=a[j];
                        d= a[j]-a[i];
                    }
                }
            }

        }
    }

pf("Peter should buy books whose prices are %lld and %lld.\n\n",sn,bn);

    }

    return 0;

    }
