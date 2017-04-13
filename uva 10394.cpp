#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

bool prime[20000010];
int tprime[20000010];

void sieve()
{
    prime[1]=false;
        int n=sqrt(20000010);
        for(int i=3;i<=n;i++)
        {
            if(prime[i]!=false)
            {
                for(int j=2*i;j<=20000010;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
}
void tnprime()
{
    int j=1;
    for(int i = 3;i<=20000000;i++){
        if(prime[i] && prime[i+2])
        {
            tprime[j++] = i;
        }
    }
}
int main()
{
    memset(prime,true,sizeof(prime));
    sieve();
    tnprime();
    int n;
    while(cin>>n)
    {
       cout<<"("<<tprime[n]<<", "<<tprime[n]+2<<")"<<endl;
    }
    return 0;
}
