#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string str;
	cout<<"Enter a string: "<<endl;
	cin>>str;
	int x=0;
	do {
		if(str[x]=='A')
	        str[x]='a';   
	    if(str[x]=='E')
	        str[x]='e';   
		if(str[x]=='I')
	        str[x]='i';   
		if(str[x]=='O')
	        str[x]='o';   
		if(str[x]=='U')
	        str[x]='u';   			    
		x++;		
	}
	while (x!=str.length());
	cout<<str;
}
