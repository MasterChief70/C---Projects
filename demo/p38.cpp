#include<iostream>
using namespace std;
int main()
{
int a,i,s,x=1;
cout<<endl<<"Enter limit=> ";
cin>>a;
s=0;
for(i=1;i<=a;i++)
{
	cout<<i<<" * ";
	x=x*i;
}
cout<<endl<<"Factorial ="<<x;

return 0;
}
