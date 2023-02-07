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
			name[i]=tolower(ch);
		}
		if(islower(ch))
		{
			name[i]=toupper(ch);
		}
	}
    for(i=n;i>=0;i--)
    {
    	cout<<name[i];
	}
}
	
	
