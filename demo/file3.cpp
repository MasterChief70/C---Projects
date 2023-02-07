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
		/*cout<<ch;*/
		s[i]=ch;
		cout<<s[i];
		if(s[i]=="a"||s[i]=="e"||s[i]=="i"||s[i]=="o"||s[i]=="u")
		{
			x++;
		}
		i++;
	}
	cout<<endl<<"Vowels = "<<x;
	if1.close();
}
