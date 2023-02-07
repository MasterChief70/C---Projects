#include<iostream>
using namespace std;
int surf(double a)
{
	int x;
	x=4*3.14*a*a;
	return x;
}
int vol(double a)
{
	int x;
	x=surf(a)*a/3;
	return x;
}
int main()
{
	int a,b;
	cout<<endl<<" Enter Radius =>";
	cin>>a;
	b=vol(a);
	cout<<endl<<" Volume = "<<b;
	b=surf(a);
	cout<<endl<<" Surface Area = "<<b;
}
