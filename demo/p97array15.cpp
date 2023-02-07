#include<iostream>
using namespace std;
int main()
{
int a[100];
int b[100];
int c[100];
int d[100];
int x=0,y=0,m=0,n,s=0,e=0,i;
cout<<endl<<" Enter number of products=>";
cin>>n;
for(i=0;i<n;i++)
{
cout<<endl<<" Enter product number=>";
cin>>a[i];
}
for(i=0;i<n;i++)
{
cout<<endl<<" Enter Quantity=>";
cin>>b[i];
}
for(i=0;i<n;i++)
{
cout<<endl<<" Enter price=>";
cin>>c[i];
}
for(i=0;i<n;i++)
{
	d[i]=b[i]*c[i];
	x=x+d[i];
}
for(i=0;i<n;i++)
{
cout<<endl<<" Final price = "<<d[i];
}
cout<<endl<<" Total amount = "<<x;
for(i=0;i<n;i++)
{
	if(b[i]>m)
	{
		m=b[i];
		y=a[i];
	}
	if(d[i]>e)
	{
		e=d[i];
		s=a[i];
	}
}
cout<<endl<<" Most bought product= "<<y;
cout<<endl<<" Most expensive product= "<<s;
cout<<endl<<" Highest Final price= "<<e;


return 0;
}
