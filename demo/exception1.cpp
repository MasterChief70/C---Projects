#include<iostream>
using namespace std;
int main()
{
	try
	{
	 int age;
	 cout<<"\nEnter your age for voting =>";
	 cin>>age;
	 if (age >= 18) 
	 {
	 cout << "You are eligible for voting";
	 } else 
	 {
	 throw age;
	 }
	}
	catch (int x) {
	 cout << "Sorry You are not eligible due to your age " <<x;
	}
return 0;
}
