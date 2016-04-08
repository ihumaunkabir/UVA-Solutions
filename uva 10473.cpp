#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string input;
    long long t;
    while(cin>>input)
    {
        t=0;
        long long len=input.length();
        for(long long i=0; i<len; i++)
        {
            if(input[i]=='x' || input[i]=='X') {
            t=1;
            break;
            }

        }

        std::stringstream ss;
        if(t==0)
        {
            long long v=atoi(input);
                ss<< std::hex << decimal_value; // int decimal_value
        std::string res ( ss.str() );

        std::cout << res;
        }
        else if(t==1)
        {
            ss  << input; // std::string hex_value
        ss >> std::hex >> decimal_value ; //int decimal_value

            std::cout << decimal_value ;
        }

    }
    return 0;
}
