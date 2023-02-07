#include<iostream>
using namespace std;

void add(int a,int b)
{
	cout<<endl<<" Add ="<<a+b;
}
void sub(int a,int b)
{
	cout<<endl<<" Sub ="<<a-b;
}
void mul(int x,int y)
{
	cout<<endl<<" Mul ="<<x*y;
}
void div(int a,int b)
{
	cout<<endl<<" Div ="<<a/b;
}
int main()
{
	int a,b;
	cout<<endl<<"Enter no1 =>";
	cin>>a;
	cout<<endl<<"Enter no2 =>";
	cin>>b;
	
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
