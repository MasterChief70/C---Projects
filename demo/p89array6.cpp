#include<iostream>
using namespace std;
int main()
{
	int e[100];
	int b[100];
	int a[100];
	int n,i,s=0,x=0,c=0,v=0;
	
		cout<<endl<<"enter limit =>";
		cin>>n;
	
		for(i=0;i<n;i++)
		{
			cout<<endl<<"enter number of "<<"a["<<i<<"] =>";
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cout<<endl<<"enter number of "<<"b["<<i<<"] =>";
			cin>>b[i];
		}
		for(i=0;i<n;i++)
		{
			e[i]=a[i]+b[i];
		}
		for(i=0;i<n;i++)
		{
			cout<<endl<<a[i]<<" - "<<b[i]<<" - "<<e[i];
			
		}
		
		
		
		
		
return 0;
}
