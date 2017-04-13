#include<bits/stdc++.h>
#define M 9

using namespace std;

int main()
{
	int a[M],fr,i;

    while(cin>>a[0])
    {
        for(i=1;i<M;i++)
            cin>>a[i];

        fr=8;
        for(i=0;i<M;i++)
            if(a[i]!=0)
                {
                    fr=i;
                    break;
                }

        if(fr==8)
            cout<<a[fr];
        else
        {
            if(a[fr]==-1)
                cout<<"-";
            else if(a[fr]==1)
                cout<<"";
            else
                cout<<a[fr];
            cout<<"x";

            if(fr!=7)
                cout<<"^"<<8-fr;

            for(i=fr+1;i<M;i++)
                if(a[i]!=0)
                    {
                        if(a[i]<0)
                            cout<<" - ";
                        else
                            cout<<" + ";

                        if((a[i]!=-1 && a[i]!=1) || i==8)
                            {

                                if(a[i]<0)
                                    cout<<a[i]*(-1);
                                else
                                    cout<<a[i];
                            }

                        if(i!=8)
                            cout<<"x";
                        if(i!=7 && i!=8)
                            cout<<"^"<<8-i;
                    }
        }
        cout<<endl;

}
	return 0;
}