#include<iostream>
using namespace std;
int main()
{
int a,i,s,x=1;
cout<<endl<<"Enter limit=> ";
cin>>a;
s=0;
for(i=a;i>=1;i--)
{
	cout<<i<<" * ";
	x=x*i;
}
cout<<endl<<"Factorial ="<<x;

return 0;
}
