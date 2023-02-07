#include<iostream>
using namespace std;
int main()
{
int a,b,i;
cout<<endl<<"Enter Limit =>";
cin>>a;
i=1;
do
{
	if(i%2==0)
	{
	    cout<<endl<<i<<" is even";
	}
	else
	{
		cout<<endl<<i<<" is odd";
	}
	i++,i;
}while(i<=a);


return 0;
}
