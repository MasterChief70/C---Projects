#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<endl<<"Enter no.1=>";
cin>>a;
cout<<endl<<"Enter no.2=>";
cin>>b;

if(a>b)
{
	cout<<endl<<a<<" is greater";
}
else if(b>a)
{
	cout<<endl<<b<<" is greater";
}
else
{
	cout<<endl<<"Both are equal";
}
	
	
return 0;
}
