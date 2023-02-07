#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	try
	{
	 char address[30];
	 int len;
	 cout<<"\nEnter address =>";
	 cin.getline(address,30);
	 len=strlen(address);
	 if (len<3) 
	 {
	 throw 0;
	 } 
	 else 
	 {
	 cout<<"\nYour address = "<<address;
	 }
	}
	catch (int x) {
	 cout << "Enter address properly";
	}
return 0;
}

