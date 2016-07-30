#include<iostream>
using namespace std;
 
void ternary(long long num)
{
    long long rem;
 
    if (num <= 1)
    {
        cout << num;
        return;
    }
    rem = num % 3;
    ternary(num / 3);
    cout << rem;
}
 
int main()
{
    long long dec, bin;
    while(cin>>dec)
    {
    	if (dec < 0)
        break;
    else
    {
        ternary(dec);
        cout << endl;
    }
	}
    return 0;
}
