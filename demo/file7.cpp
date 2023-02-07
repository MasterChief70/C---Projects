#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream if1;
	ofstream of1;
		
	if1.open("d:\\abc.txt");
	of1.open("d:\\pqr.txt");
	
	char ch;
	while(!if1.eof())
	{
		if1.get(ch);
		
		of1<<ch;
	}

	of1.close();
	if1.close();
}
