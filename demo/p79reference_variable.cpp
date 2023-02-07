#include<iostream>
#include<iomanip>
using namespace std;
void swap(int &x,int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
}
int main()
{
int a,b;
cout<<endl<<"enter number =>";
cin>>a;
cout<<endl<<"enter number =>";
cin>>b;
swap(a,b);
cout<<endl<<a<<setw(10)<<b;



return 0;
}
