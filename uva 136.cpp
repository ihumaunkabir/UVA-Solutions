#include<iostream>
using namespace std;
int main()
{
long n[6000]={0},a=1,b=1,c=1,i,j,x=2,y=3,z=5,t=2;
n[1]=1;
while(n[1500]==0)
    {
    if(x<y && x<z) {
                    n[t]=x;
                    a++;
                    x=n[a]*2;
                    t++;
                    }
    else if(y<x && y<z) {
                        n[t]=y;
                        b++;
                        y=n[b]*3;
                        t++;
                        }
    else if(z<y && z<x) {
                        n[t]=z;
                        c++;
                        z=n[c]*5;
                        t++;
                        }
    if(x==y) {
             a++;
             x=n[a]*2;
             }
    else if(y==z) {
                    b++;
                    y=n[b]*3;
                    }
    else if(z==x) {
                    c++;
                    z=n[c]*5;
                    }
    }
cout<<"The 1500'th ugly number is "<<n[1500]<<"."<<endl;
return 0;
}
