#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>
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
		/*cout<<ch;*/
		s[i]=ch;
		cout<<s[i];
		if(islower(ch))
		{
			x++;
		}
		i++;
	}
	cout<<endl<<"Lowers = "<<x;
	if1.close();
}
