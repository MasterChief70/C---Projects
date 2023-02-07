#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char name[100];
	int i,n,c=0,x=0;
	char ch;
	
	cout<<endl<<"Enter name =>";
	cin.getline(name,100);
	
	n=strlen(name);
	
	for(i=0;i<n;i++)
	{
		ch=name[i];
		
		if(isupper(ch))
		{
			c++;
		}
		if(islower(ch))
		{
			x++;
		}
		
	}
	
	cout<<endl<<"Total upper letters are "<<c;
	cout<<endl<<"Total lower letters are "<<x;
}
	
	
