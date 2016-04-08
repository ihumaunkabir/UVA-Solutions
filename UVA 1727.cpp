#include<iostream>

using namespace std;

int main()
{

int i,n,m,d;
string mmth[100],dday[100];
string mth,day;
while(cin>>n)
{
    for(i=0; i<n; i++)
    {
        cin>>mmth[i]>>dday[i];

    }

    for(i=0; i<n; i++)
    {
        mth=mmth[i];
        day=dday[i];



        if(mth=="FEB") d=28;

        else if(mth=="JAN" || mth=="MAR" || mth=="MAY" ||mth=="JUL" || mth=="AUG" || mth=="OCT" || mth=="DEC") d=31;
        else if(mth=="APR" || mth=="JUN" || mth=="SEP" || mth=="NOV") d=30;

        if(day=="SUN") m=1;
        else if(day=="MON") m=2;
        else if(day=="TUE") m=3;
        else if(day=="WED") m=4;
        else if(day=="THU") m=5;
        else if(day=="FRI") m=6;
        else if(day=="SAT") m=7;

        //logic block :)

        if(d==28 && (m==2 || m==3 || m==4 || m==5 || m==1 || m==7)) cout<<"8"<<endl;
        if(d==28 && m==6) cout<<"8"<<endl;

        if((m==1 || m==2 || m==3) && (d==30 || d==31)) cout<<"8"<<endl;
        if(m==4 && d==30) cout<<"8"<<endl;
        if(m==4 && d==31) cout<<"9"<<endl;

        if(m==5 && d==30) cout<<"9"<<endl;
        if(m==5 && d==31) cout<<"10"<<endl;
        if((m==6) && (d==30 || d==31)) cout<<"10"<<endl;
        if((m==7) && (d==30 || d==31)) cout<<"9"<<endl;

    }
}

return 0;
}
