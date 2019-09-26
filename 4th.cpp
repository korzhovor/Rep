#include <iostream>
#include <string.h>
using namespace std;

char func(char str[])
{
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
	while (x!=strlen(str));
}

int main()
{
	char str[0];
	cout<<"Enter a string: "<<endl;
	cin>>str;
	func(str);
	cout<<str;
}
