#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream if1;
	
	if1.open("d:\\abc.txt");
	char ch;
	
	while(!if1.eof())
	{
		if1.get(ch);
		cout<<ch;
	}
	if1.close();
}
