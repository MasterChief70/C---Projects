#include<iostream>
using namespace std;
int main()
{
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
		if(a[i]>s)
		{
			s=a[i];
		}
	}
	cout<<endl<<" Greatest number => "<<s;
	
	
	
return 0;
}
