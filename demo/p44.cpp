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
	if(i%2==0)
	{
	    cout<<"+"<<i;
	    s=s+i;
	}
	else
	{
	    cout<<"-"<<i;
	    s=s-i;
	}
}
cout<<endl<<"Total sum ="<<s;

return 0;
}
