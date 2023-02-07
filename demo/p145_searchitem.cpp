#include<iostream>
using namespace std;
int array(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<endl<<" Enter Number =>";
		cin>>a[i];
	}
}
int search(int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(x=a[i])
		{
			cout<<endl<<" Found - "<<a[i];
		}
	}
}
int main()
{
	int n,x,a[100];
	cout<<endl<<" Enter Limit=>";
	cin>>n;
	array();
	search();
}


