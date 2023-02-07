#include<iostream>
using namespace std;
int main()
{
int a,b,i,x=1;
cout<<endl<<"Enter Limit =>";
cin>>a;
i=a;
while(i>=1)
{
	cout<<i<<" * ";
	x=x*i;
	i--;
}
cout<<endl<<x;

return 0;
}
