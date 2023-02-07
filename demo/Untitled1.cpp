#include<iostream>
using namespace std;
int main()
{
	double n,a,x;
	cout<<endl<<" Enter Amount=>";
	cin>>a;
	cout<<endl<<" Enter Percent=>";
	cin>>x;
	cout<<endl<<" Enter Limit=>";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		double z;
		z=(x/100)*a;
		a=z+a;
		
	}
	cout<<endl<<a;
return 0;
}
