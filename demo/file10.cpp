#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream if1;
	ofstream of1;
	ifstream if2;
		
	if1.open("d:\\pqr.txt");
	if2.open("d:\\xyz.txt");
	of1.open("d:\\def.txt");
	
	char ch;
	while(!if1.eof())
	{
		if1.get(ch);
		of1<<ch;	
	}
	while(!if2.eof())
	{
		if2.get(ch);
		of1<<ch;
	}

	of1.close();
	if1.close();
}
