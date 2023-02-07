#include<iostream>
using namespace std;
void square(int a,int b=2)
{
	int x=1;
	for(int i=1;i<=b;i++)
	{
		x=x*a;
	}
	cout<<endl<<"Answer = "<<x;
}
int main()
{
	int a,b;
	cout<<endl<<"Enter number 1 =>";
	cin>>a;
	cout<<endl<<"Enter number 2 =>";
	cin>>b;
	square(a,b);
}
