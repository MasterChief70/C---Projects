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
	cout<<endl<<" enter the search no. ->";
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			c=c+1;
		}
		cout<<endl<<a[i];
	}
	cout<<endl<<" No. of times search item appeared = "<<c;
return 0;
}
