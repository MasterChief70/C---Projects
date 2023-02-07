#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream if1;
	
	if1.open("d:\\abc.txt");
	char ch;
	string s[1000];
	int x=0,i;
	while(!if1.eof())
	{
		if1.get(ch);
		
		if(ch==' ')
		{
			x++;
		}
	}
	cout<<endl<<"Spaces = "<<x;
	if1.close();
}
