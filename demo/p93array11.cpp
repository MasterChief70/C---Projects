#include<iostream>
using namespace std;
int main()
{
int o[100];
int e[100];
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
		if(a[i]%2==0)
		{
		    e[i]=a[i];
		}
		else
		{
			o[i]=a[i];
		}
	}
	cout<<endl<<" Original Numbers -";
	for(i=0;i<n;i++)
	{
		cout<<endl<<a[i];
	}
	cout<<endl<<" Even Numbers -";
	for(i=0;i<n;i++)
	{
		cout<<endl<<e[i];
	}
	cout<<endl<<" Odd Numbers -";
	for(i=0;i<n;i++)
	{
		cout<<endl<<o[i];
	}
	
return 0;	
}
