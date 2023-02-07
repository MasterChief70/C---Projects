#include<iostream>
using namespace std;
int main()
{
	int n,*p;
	int a[100];
	cout<<endl<<" Enter Limit=>";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<endl<<" Enter Number =>";
		cin>>a[i];
	}
	p=a;
	for(int i=0;i<n;i++)
	{
		cout<<endl<<*p;
		p++;
	}
	
return 0;
}
