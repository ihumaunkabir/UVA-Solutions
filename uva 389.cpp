#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    char s[1000000];
    int b,c;
    while(scanf("%s %d %d",&s,&b,&c)==3)
    {
        int sum=0,i,j,k,l,m,n=0;
        for(i=strlen(s)-1;i>=0;i--)
        {
            if(s[i]=='A')m=10;
            else if(s[i]=='B')m=11;
            else if(s[i]=='C')m=12;
            else if(s[i]=='D')m=13;
            else if(s[i]=='E')m=14;
            else if(s[i]=='F')m=15;
            else
            {
                m=s[i]-'0';
            }
            sum=sum+m*pow(b,n++);
        }
        n=0;
        while(sum)
        {
            m=sum%c;
            sum=sum/c;
            if(m==10)s[n++]='A';
            else if(m==11)s[n++]='B';
            else if(m==12)s[n++]='C';
            else if(m==13)s[n++]='D';
            else if(m==14)s[n++]='E';
            else if(m==15)s[n++]='F';
            else
            {
                s[n++]=m+'0';
            }
        }
        s[n]='\0';
       // puts(s);
        char ch[1000000];
        n=0;
        for(i=strlen(s)-1;i>=0;i--)ch[n++]=s[i];
        ch[n]='\0';
        if(strlen(s)>7)printf("  ERROR\n");
        else
        {
            if(strlen(ch)!=0){
            cout.width(7);
            cout.setf(ios :: right);
            cout << ch << endl;
            }
            else printf("      0\n");

        }
    }
    return 0;
}
