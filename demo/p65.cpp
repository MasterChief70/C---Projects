#include<iostream>
using namespace std;
int main()
{
int a,b;
do
{
cout<<endl<<"Enter 1 for suare and 2 for cube and 3 for exit=>";
cin>>a;

if(a==1)
{
	cout<<endl<<"Enter Number ->";
	cin>>b;
	cout<<endl<<" Square = "<<b*b;
}
else if(a==2)
{
	cout<<endl<<"Enter Number ->";
	cin>>b;
	cout<<endl<<" Cube = "<<b*b*b;
}
else if(a==3)
{
	break;
}
else
{
	cout<<endl<<" Invalid";
}
}while(a!=3);



return 0;
}
