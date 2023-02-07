#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
double a[100];
int i=0,n=0;
double b=0.00,c=0.00,x=0.00,z=0.00,y=0.00,m=0.00;
cout<<endl<<" Enter Integers, Terminate with EOF=>";
while(cin>>z)
{
	a[i]=z;
	i++;
	n++;
	
}
for(i=0;i<n;i++)
{
	x=x+a[i];
}
y=x/n;
for(i=0;i<n;i++)
{
	m=m+(a[i]-y)*(a[i]-y);
}
c=(double)m/n;
b=sqrt(c);
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl<<" Mean = "<<y<<" Variance = "<<c<<" Standaed Deviation = "<<b;
return 0;
}
