#include<iostream>
using namespace std;
int main()
{
char a;
int b,c;
do
{
cout<<endl<<"Enter + for add, - for sub, * for mul, / for div, e for exit=>";
cin>>a;

if(a=='+')
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Add = "<<b+c;
}
else if(a=='-')
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Sub = "<<b-c;
}
else if(a=='*')
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Mul = "<<b*c;
}
else if(a=='/')
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Div = "<<b/c;
}
else if(a=='e')
{
	break;
}
else
{
	cout<<endl<<" Invalid";
}
}while(a!='e');



return 0;
}
