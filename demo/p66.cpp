#include<iostream>
using namespace std;
int main()
{
int a,b,c;
do
{
cout<<endl<<"Enter 1 for add, 2 for sub, 3 for mul, 4 for div, 5 for exit=>";
cin>>a;

if(a==1)
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Add = "<<b+c;
}
else if(a==2)
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Sub = "<<b-c;
}
else if(a==3)
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Mul = "<<b*c;
}
else if(a==4)
{
	cout<<endl<<"Enter Both Numbers ->";
	cin>>b>>c;
	cout<<endl<<" Div = "<<b/c;
}
else if(a==5)
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
