#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<endl<<"Enter numbers a,b,c=>";
cin>>a>>b>>c;
if(a>b && a>c)
{
	cout<<endl<<a<<" Is the greatest";
}
else if(b>a && b>c)
{
	cout<<endl<<b<<" Is the greatest";
}
else
{
	cout<<endl<<c<<" Is thee greatest";
}
return 0;
}
