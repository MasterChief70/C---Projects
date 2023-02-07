#include<iostream>
using namespace std;
int main()
{
int a,b,i,x=1;
cout<<endl<<"Enter Limit =>";
cin>>a;
i=a;
do
{
	cout<<i<<" * ";
	x=x*i;
	i--,i;
}while(i>=1);
cout<<endl<<x;

return 0;
}
