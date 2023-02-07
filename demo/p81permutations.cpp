#include<iostream>
using namespace std;
int fact(int &a)
{
	int x=1;
	for(int i=1;i<=a;i++)
	{
		x=x*i;
	}
	return x;
}
int per(int &a,int &b)
{
	int x,y,z,d;
	x=fact(a);
	y=a-b;
	z=fact(y);
	cout<<endl<<"z= "<<z;
    d=x/z;
	return d;	
}

int main()
{
	int a,b,j,h;
	do
	{
	
	cout<<endl<<"Enter Number 1=>";
	cin>>a;
	if(a==0)
	{
		break;
	}
	cout<<endl<<"Enter Number 2=>";
	cin>>b;
	h=fact(a);
	cout<<endl<<"A! ="<<h;
	h=fact(b);
	cout<<endl<<"B! ="<<h;
	j=per(a,b);
	cout<<endl<<"Answer ="<<j;
    }while(a!=0);
	
return 0;
}

