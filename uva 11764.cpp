#include<iostream>

using namespace std;

int main()
{

    int a[100];
    int t,n,ele,i,j,hi,low;


    while(cin>>t)
    {
        ele=1;
        while(t--)
        {
            hi=0;
            low=0;

            cin>>n;
            for(i=0; i<n; i++)
            {
                cin>>a[i];
            }

            if(n==1) cout<<"Case "<<ele<<": "<<"0 0"<<endl;

            else if(n==2) {
                if(a[0]<a[1]) cout<<"Case "<<ele<<": "<<"1 0"<<endl;
                else if(a[0]>a[1]) cout<<"Case "<<ele<<": "<<"0 1"<<endl;
            }

            if(n>2)
            {
                for(j=0; j<n-1; j++)
                {
                    if(a[j+1]>a[j]) hi+=1;
                    else if(a[j+1]<a[j]) low+=1;
                }

            cout<<"Case "<<ele<<": "<<hi<<" "<<low<<endl;

            }

            ele++;

        }

    }

}
