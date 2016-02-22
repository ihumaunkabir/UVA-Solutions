#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int T,i=0;
    float c,f,C;
    cin>>T;
    while(T--)
    {
        cin>>c>>f;
        C=((5.0/9.0)*f)+c;

        cout<<"Case "<<++i<<": "<<fixed<<setprecision(2)<<C<<endl;


    }

    return 0;
}
