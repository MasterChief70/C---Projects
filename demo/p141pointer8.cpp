#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double a[100],*pb,*pc;
int i=0,n=0;
double b=0.0,c=0.0,x=0.0,z=0.0;
cout<<endl<<" Enter Integers, Terminate with EOF=>";
while(cin>>z)
{
	a[i]=z;
	i++;
	n++;
	
}
for(i=0;i<n;i++)
{
	if(a[i]>b)
	{
		pb=&a[i];
		b=a[i];
	}
	if(a[i]<c)
	{
		pc=&a[i];
		c=a[i];
	}
}
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl<<" Min. Value= "<<c<<" "<<pc<<" Max. value= "<<b<<" "<<pb;
return 0;
}
