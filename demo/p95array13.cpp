#include<iostream>
using namespace std;
int main()
{
int a[100];
int b[100];
int c[100];
int i,x=0,m,n,s;

cout<<endl<<" Enter Limit for A=>";
cin>>n;
for(i=0;i<n;i++)
{
	cout<<endl<<"enter number of "<<"a["<<i<<"] =>";
	cin>>a[i];
}
cout<<endl<<" Enter Limit for B=>";
cin>>s;
for(i=0;i<s;i++)
{
	cout<<endl<<"enter number of "<<"b["<<i<<"] =>";
	cin>>b[i];
}

for(i=0;i<n;i++)
{
	c[x]=a[i];
	x++;
}
for(i=0;i<s;i++)
{
	c[x]=b[i];
	x++;
}
for(i=0;i<x;i++)
{
	cout<<c[i]<<", ";
}


return 0;
}
