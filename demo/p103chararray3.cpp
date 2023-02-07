#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char name[100];
	char upper[100];
	char lower[100];
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
			lower[x]=tolower(ch);
			x++;
		}
		if(islower(ch))
		{
			upper[c]=toupper(ch);
			c++;
		}
	}
    for(i=0;i<x;i++)
    {
    	cout<<lower[i];
	}
	cout<<"\n";
	for(i=0;i<c;i++)
	{
		cout<<upper[i];
	}
}
	
	
