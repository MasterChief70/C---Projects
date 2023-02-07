#include<iostream>
using namespace std;
int main()
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
	cout<<endl<<a<<" prime";
}
else
{
	cout<<endl<<a<<" not prime";
}

	
return 0;
}
