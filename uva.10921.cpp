#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<string>

using namespace std;

int main(){
	
	string word="";
	int len;
	int i;
	
	while(cin>>word){
		
		len=word.length();
		
			for(i=0; i<len; i++){
				if(word[i]=='A' || word[i]=='C' || word[i]=='B') cout<<"2";
					else if(word[i]=='D' || word[i]=='E' || word[i]=='F') cout<<"3";
					 	else if(word[i]=='G' || word[i]=='H' || word[i]=='I') cout<<"4";
					 		else if(word[i]=='J' || word[i]=='K' || word[i]=='L') cout<<"5";
					 			else if(word[i]=='M' || word[i]=='N' || word[i]=='O') cout<<"6";
					 				else if(word[i]=='P' || word[i]=='Q' || word[i]=='R' || word[i]=='S') cout<<"7";
					 					else if(word[i]=='T' || word[i]=='U' || word[i]=='V') cout<<"8";
					 						else if(word[i]=='W' || word[i]=='X' || word[i]=='Y' || word[i]=='Z') cout<<"9";
					 							else cout<<word[i];
					 						
			}
			cout<<endl;
			word="";
			
			
	}	
return 0;
}
