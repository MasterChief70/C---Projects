#include<iostream>
using namespace std;
int main()
{
int b[100];
int a[100];
int s,i,c=0,n;
    cout<<endl<<"enter limit =>";
	cin>>n;
    for(i=0;i<n;i++)
	{
		cout<<endl<<"enter number of "<<"a["<<i<<"] =>";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<endl<<a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<endl<<b[i];
	}
	
return 0;	
}
