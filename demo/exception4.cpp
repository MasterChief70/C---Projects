#include<iostream>
using namespace std;
int main()
{
	try
	{
	 int english,hindi;
	 cout<<"\nEnter marks of English =>";
	 cin>>english;
	 cout<<"\nEnter marks of Hindi =>";
	 cin>>hindi;
	 if(english<0)
	 {
	 throw 1;
	 }
	 else if(hindi<0)
	 {
	 throw 1.1;
	 }
	 else{
	 cout<<"\nTotal marks = "<<english+hindi;
	 }
	}
	catch(int x)
	{
	 cout<<"\nEnter Valid marks in English";
	}
	catch(double x)
	{
	 cout<<"\nEnter Valid marks in Hindi";
	}
return 0;
}
