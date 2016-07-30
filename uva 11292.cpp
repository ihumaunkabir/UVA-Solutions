#include<iostream>
#define pf printf
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{

long long cnt,n,m,i,j,gold,dino[20000+10],knt[20000+10];
long long def;
bool b;

    while(cin>>n>>m)
    {
        if(m==0 && n==0) break;
        gold=0;
        for(i=0; i<n; i++)
        {
            cin>>dino[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>knt[i];
        }

        sort(dino,dino+n);
        sort(knt,knt+m);
        b=true;
        for(i=0,j=0;i<n && b; i++)
        {
                while(j<m && knt[j]<dino[i])++j;
                if(j==m) b=false;
                else {
                gold+=knt[j++];
                }
        }
          if(b) pf("%lld\n",gold);
            else cout<<"Loowater is doomed!"<<endl;
    }

    return 0;
}
