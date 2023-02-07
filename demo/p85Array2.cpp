#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n,i,s=0;
	
		cout<<endl<<"enter limit =>";
		cin>>n;
	
		for(i=0;i<n;i++)
		{
			cout<<endl<<"enter number of "<<"a["<<i<<"] =>";
			cin>>a[i];
		}
	
		for(i=0;i<n;i++)
		{
		cout<<endl<<a[i];
		s=s+a[i];
		}
		
		cout<<endl<<"Sum = "<<s;
return 0;
}
