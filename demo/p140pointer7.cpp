#include<iostream>
using namespace std;
int main()
{
	int n,x,z,i=0;
	int a[100];
	cout<<endl<<" Enter Number, Terminate with EOF=>";
	while(cin>>z)
	{
		a[i]=z;
		i++;
		n++;	
	}
	cout<<endl<<" Enter Search Item =>";
	cin>>x;	
	cout<<endl<<" "<<n<<" "<<x;	
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
		if(a[i]==x)
		{
			cout<<endl<<&a[i];
			break;
		}
	}
}
/*while((x=cin.get())!=EOF)
	{
		for(int i=0;i<100;i++)
		{
			cout<<endl<<" Enter Number =>";
			cin>>a[i];
		}
	}*/
