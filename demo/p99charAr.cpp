#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char name[100];
	int i,n;
	char ch;
	
	cout<<endl<<"Enter name =>";
	cin.getline(name,100);
	
	n=strlen(name);
	
	for(i=0;i<n;i++)
	{
		ch=name[i];
		cout<<endl<<ch;
	}
	
}
	
	
