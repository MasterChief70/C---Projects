#include<iostream>
using namespace std;
int main()
{
int a;
cout<<endl<<"Enter year=>";
cin>>a;
if(a%4==0)
{
	cout<<endl<<a<<" Is a leap year";
}
else
{
	cout<<endl<<a<<" Is not a leap year";
}
return 0;
}
