#include<iostream>
using namespace std;

void square(int a)
{
	cout<<endl<<" Square ="<<a*a;
}
void max2(int a,int b)
{
	if(a>b)
	{
		cout<<endl<<a<<" Is the greatest";
	}
	else if(b>a)
	{
		cout<<endl<<b<<" Is the greatest";
	}
	else
	{
		cout<<endl<<" Both numbers are same";
	}
	
}
void areaoftriangle(int x,int y)
{
	cout<<endl<<" Area of triangle="<<x*y*0.5;
}
int main()
{
	int a,b;
	cout<<endl<<"Enter no1 =>";
	cin>>a;
	cout<<endl<<"Enter no2 =>";
	cin>>b;
	
	square(a);
	max2(a,b);
	areaoftriangle(a,b);
}
