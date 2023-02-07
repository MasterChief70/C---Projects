#include<iostream>
using namespace std;
int main()
{
int a,b,i,x=1;
cout<<endl<<"Enter Limit =>";
cin>>a;
i=1;
while(i<=a)
{
	cout<<i<<" * ";
	x=x*i;
	i++;
}
if(a>0)
{
cout<<endl<<x;
}
else
{
cout<<endl<<"unexpected input";
}
return 0;
}
