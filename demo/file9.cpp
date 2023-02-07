#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream if1;
	ofstream of1;
	ofstream of2;
		
	if1.open("d:\\abc.txt");
	of1.open("d:\\pqr.txt");
	of2.open("d:\\xyz.txt");
	
	char ch;
	while(!if1.eof())
	{
		if1.get(ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			of1<<ch;
		}
		else
		{
			of2<<ch;
		}
			
	}

	of1.close();
	if1.close();
}
