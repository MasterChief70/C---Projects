#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream if1;
	
	if1.open("d:\\abc.txt");
	char ch;
	string s[1000];
	int x=0,i,y=0;
	while(!if1.eof())
	{
		if1.get(ch);
		/*cout<<ch;*/
		s[i]=ch;
		if(s[i]=="a"||s[i]=="e"||s[i]=="i"||s[i]=="o"||s[i]=="u")
		{
			cout<<" ";
			x++;
		}
		else
		{
			cout<<s[i];
			y++;
		}
		i++;
	}
	cout<<endl<<"Vowels = "<<x<<"  "<<y;
	if1.close();
}
