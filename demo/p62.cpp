#include<iostream>
using namespace std;
int main()
{
int a,b,i,x=1;
cout<<endl<<"Enter Limit =>";
cin>>a;
i=1;
do
{
	cout<<i<<" * ";
	x=x*i;
	i++,i;
}while(i<=a);
cout<<endl<<x;

return 0;
}
