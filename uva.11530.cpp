#include<stdio.h>
#include<string.h>
int main()

{
int p,i,n,len,k;
char ch[102];
while(scanf("%d",&n)==1)
   {
   for(k=0;k<=n;k++)
       {
       gets(ch);
        p=0;
       len=strlen(ch);
       for(i=0;i<=len;i++)
          {
                        
          if (ch[i]=='a'|| ch[i]=='d'|| ch[i]=='g'|| ch[i]=='j'|| ch[i]=='m'||
          ch[i]=='p'|| ch[i]=='t'|| ch[i]=='w'|| ch[i]==' ' )
          p=p+1;
          else if  (ch[i]=='b'|| ch[i]=='e'|| ch[i]=='h'|| ch[i]=='k'|| ch[i]=='n'||
          ch[i]=='q'|| ch[i]=='u'|| ch[i]=='x' )
          p=p+2;
          
          else if (ch[i]=='c'|| ch[i]=='f'|| ch[i]=='i'|| ch[i]=='l'|| ch[i]=='o'||
          ch[i]=='r'|| ch[i]=='v'|| ch[i]=='y' )
          p=p+3;
          else if(ch[i]=='s'||ch[i]=='z')
          p=p+4;
          }
          if(k!=0)
          printf("Case #%d: %d\n",k,p);
       }
   }
}
