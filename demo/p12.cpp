#include<iostream>
using namespace std;
int main()
{
int a;
cout<<endl<<"Enter number=>";
cin>>a;
if(a>0)
{
	cout<<endl<<a<<" Is positive";
}
else if(a<0)
{
	cout<<endl<<a<<" Is negative";
}
else
{
	cout<<endl<<a<<"Is zero";
}
return 0;
}
