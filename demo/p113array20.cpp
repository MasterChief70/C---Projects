#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double a[100];
double b[100];
int i=0,n=0,j=0,m=0;
double d=0.0,c=0.0,x=0.0,z=0.0,y=0.0,v=0.0;
cout<<endl<<" Enter number 1 for Both Arrays, Terminate with EOF=>";
while(cin>>z>>x)
{
	cout<<" Enter number "<<i+2<<" for Both Arrays, Terminate with EOF=>";
	a[i]=z;
	b[i]=x;
	i++;
	n++;
}
cout<<" First Array-> ";
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
	
}
cout<<" Second Array-> ";
for(i=0;i<n;i++)
{
	cout<<b[i]<<" ";

}
for(i=0;i<n;i++)
{
	y=a[i]*b[i];
	v=v+y;
}
cout<<endl<<" Inner Product = "<<v;


return 0;
}
