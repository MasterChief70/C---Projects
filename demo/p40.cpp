#include<iostream>
using namespace std;
int main()
{
int a,i,x=0,y=0,b=0,v=0;
cout<<endl<<"Enter limit=> ";
cin>>a;

for(i=1;i<=a;i++)
{
	if(i%2==0)
	{
		cout<<endl<<i<<" is even";
		x=x+1;
		b=b+i;
	}
	else
	{
		cout<<endl<<i<<" is odd";
		y=y+1;
		v=v+i;
	}

}
cout<<endl<<"Even count ="<<x<<" Even Sum ="<<b;
cout<<endl<<"Odd count ="<<y<<" Odd Sum ="<<v;

return 0;
}
