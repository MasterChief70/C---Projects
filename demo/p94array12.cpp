#include<iostream>
using namespace std;
int main()
{
int o[100];
int e[100];
int a[100];
int s=0,i,c=0,n,k=0,l=0;
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
		    e[k]=a[i];
			k++;
		}
		else
		{
			o[l]=a[i];
			l++;
		}
	}
	cout<<endl<<"Even count - "<<c<<" Odd count - "<<" "<<s;
	cout<<endl<<" Original Numbers -\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<" Even Numbers \n";
	for(i=0;i<k;i++)
	{
		cout<<e[i]<<" ";
	}
	cout<<endl<<" Odd Numbers \n";
	for(i=0;i<l;i++)
	{
		cout<<o[i]<<" ";   
	}
	
return 0;	
}
