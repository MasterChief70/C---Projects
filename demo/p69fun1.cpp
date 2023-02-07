#include<iostream>
using namespace std;

void add()
{
	int a,b;
	cout<<"enter two numbers =>";
	cin>>a>>b;
	cout<<endl<<"Add = "<<a+b;
}
void cube()
{
	int a;
	cout<<endl<<" enter number =>";
	cin>>a;
	cout<<endl<<"Cube ="<<a*a*a;
}
void areaoftriangle()
{
	int a,b;
	cout<<endl<<"enter height and base=>";
	cin>>a>>b;
	cout<<endl<<"Area of triangle= "<<a*b*0.5;
}
void oddeven()
{
	int a,i;
	cout<<endl<<"enter limit =>";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
	{
		cout<<endl<<i<<" Is even";
	}
	    else
	{
		cout<<endl<<i<<" Is odd";
	}
	}
}
void max3()
{
	int a,b,c;
	cout<<endl<<"enter three numbers =>";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<endl<<a<<" Is the greatest";
	}
	else if(b>c && b>a)
	{
		cout<<endl<<b<<" Is the greatest";
	}
	else
	{
		cout<<endl<<c<<" Is the greatest";
	}
}
void table()
{
	int a,i;
	cout<<endl<<" Enter Number =>";
	cin>>a;
	for(i=1;i<=10;i++)
	{
		cout<<endl<<a<<" * "<<i<<" = "<<a*i;
	}
}
void fact()
{
	int a,i,x=1;
	cout<<endl<<" Enter Limit =>";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cout<<i<<" * ";
		x=x*i;
	}
	cout<<endl<<" Fact= "<<x;
}
void prime()
{
	int a,b=0,c,i,x;
cout<<endl<<"Enter Number =>";
cin>>a;

for(i=2;i<a;i++)
{
	if(a%i==0)
	{
		b=1;
		break;
	}
}

if(b==0)
{
	cout<<endl<<a<<" is prime";
}
else
{
	cout<<endl<<a<<" is not prime";
}
}
int main()
{
	add();
	cube();
	areaoftriangle();
	oddeven();
	max3();
	table();
	fact();
	prime();	

return 0;
}
