#include<iostream>
using namespace std;
int main()
{
int a,i,x=0;
cout<<endl<<"Enter limit=> ";
cin>>a;

for(i=1;i<=a;i++)
{
	if(i==a)
	{
		cout<<i;
	}
	else
	{
		cout<<i<<"+";	
	}
	
	x=x+i;
}
cout<<endl<<"Total Sum ="<<x;

return 0;
}
