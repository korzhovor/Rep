#include <iostream>
#include <string.h>
using namespace std;

void func(int *arr, char str[0])
{
    int x=0;
    do {
		if((str[x]=='a') or (str[x]=='A'))
	        arr[0]++;   
	    if((str[x]=='e') or (str[x]=='E'))
	        arr[1]++; 
		if((str[x]=='i') or (str[x]=='I'))
	        arr[2]++; 
		if((str[x]=='o') or (str[x]=='O'))
	        arr[3]++; 
		if((str[x]=='u') or (str[x]=='U'))
	        arr[4]++; 			    
		x++;		
	}
	while (x!=strlen(str));
}

int main()
{
	char str[0];
	int arr[5]{0,0,0,0,0};
	cout<<"Enter a string: "<<endl;
	cin>>str;
	func(arr, str);
	cout<<"number of ""a"" character's: "<<arr[0]<<endl;
	cout<<"number of ""e"" character's: "<<arr[1]<<endl;
	cout<<"number of ""i"" character's: "<<arr[2]<<endl;
	cout<<"number of ""o"" character's: "<<arr[3]<<endl;
	cout<<"number of ""u"" character's: "<<arr[4]<<endl;
}
