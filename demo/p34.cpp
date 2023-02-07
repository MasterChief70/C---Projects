#include<iostream>
using namespace std;
int main()
{
int a,i;
cout<<endl<<"Enter limit=> ";
cin>>a;

for(i=1;i<=a;i++)
{
	if(i%2==0)
	{
		cout<<endl<<i<<" is even";
	}
	else
	{
		cout<<endl<<i<<" is odd";
	}
}


return 0;
}
