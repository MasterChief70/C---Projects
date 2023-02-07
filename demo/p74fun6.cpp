#include<iostream>
using namespace std;

void add(int a,int b,int c,int d,int e)
{
	cout<<endl<<" Add ="<<a+b+c+d+e;
}
void add(int a,int b)
{
	cout<<endl<<" Add ="<<a+b;
}
void add(int a,int b,int c)
{
	cout<<endl<<" Add ="<<a+b+c;
}
void add(int a,int b,int c,int d)
{
	cout<<endl<<" Add ="<<a+b+c+d;
}

int main()
{

	add(1,2,3,4,5);
	add(1,2);
	add(1,2,3);
	add(1,2,3,4);
	
}
