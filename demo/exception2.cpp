#include<iostream>
using namespace std;
int main()
{
	try
	{
	 int no1,no2,div;
	 cout<<"\nEnter no1 =>";
	 cin>>no1;
	 cout<<"\nEnter no2 =>";
	 cin>>no2;
	 if (no2==0||no1==0) 
	 {
	 throw 0;
	 } 
	 else 
	 {
	 div=no1/no2;
	 cout<<"\nDivision = "<<div;
	 }
	}
	catch (int x) {
	 cout << "Why you entered 0 , Division by 0 is not possible";
	}
return 0;
}
