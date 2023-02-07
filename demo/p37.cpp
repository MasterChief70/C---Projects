#include<iostream>
using namespace std;
int main()
{
int a,i,s,x;
cout<<endl<<"Enter limit=> ";
cin>>a;
s=0;
for(i=1;i<=a;i++)
{
	x=i*i;
	cout<<endl<<x<<" + ";
	s=s+x;
}
cout<<endl<<"Total sum ="<<s;

return 0;
}
