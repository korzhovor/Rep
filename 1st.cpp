#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[0];
	int x=0, a=0, e=0, i=0, o=0, u=0;
	cout<<"Enter a string: "<<endl;
	cin>>str;
	do {
		if((str[x]=='a') or (str[x]=='A'))
	        a++;   
	    if((str[x]=='e') or (str[x]=='E'))
	        e++; 
		if((str[x]=='i') or (str[x]=='I'))
	        i++; 
		if((str[x]=='o') or (str[x]=='O'))
	        o++; 
		if((str[x]=='u') or (str[x]=='U'))
	        u++; 			    
		x++;		
	}
	while (x!=strlen(str));
	cout<<"number of ""a"" character's: "<<a<<endl;
	cout<<"number of ""e"" character's: "<<e<<endl;
	cout<<"number of ""i"" character's: "<<i<<endl;
	cout<<"number of ""o"" character's: "<<o<<endl;
	cout<<"number of ""u"" character's: "<<u<<endl;
}
