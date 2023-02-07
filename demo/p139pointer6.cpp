#include<iostream>
using namespace std;
int main()
{
	int a[100],n,x;
	cout<<endl<<" Enter Limit=>";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<endl<<" Enter Number =>";
		cin>>a[i];
	}
	while((x=cin.get())!=EOF)
	{
		cout<<endl<<" Enter Search Item =>";
		cin>>x;
		for(int i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				cout<<endl<<a[i];
				int *pa;
				pa=&a[i];
				cout<<endl<<pa;
			}
		}
	}
return 0;
}
