#include<iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}
int max2(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int cube(int x)
{
	return x*x*x;
}
int main()
{
	int a,b;
	int c;
	cout<<endl<<"Enter no1 =>";
	cin>>a;
	cout<<endl<<"Enter no2 =>";
	cin>>b;
	
	c=add(a,b);
	cout<<endl<<"Add = "<<c;
	c=max2(a,b);
	cout<<endl<<"MAx2 = "<<c;
	c=cube(a);
	cout<<endl<<"Cube = "<<c;
	
return 0;
}
