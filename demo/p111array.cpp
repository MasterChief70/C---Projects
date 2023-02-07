#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a[100];
int i=0,n=0,x=0,z;
cout<<endl<<" Enter Integers, Terminate with EOF=>";
while(cin>>z)
{
	a[i]=z;
	i++;
	n++;
	x=x+z;
}
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl<<"No. of Elements = "<<n<<" Sum = "<<x<<" Average = "<<x/n;
return 0;
}
