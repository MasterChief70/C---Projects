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
	    x=i*i;
	    cout<<x<<" + ";
	    s=s+x;
	}
	else
	{
		x=i*i*i;
	    cout<<x<<" + ";
	    s=s+x;
	}
}
cout<<endl<<"Total sum ="<<s;

return 0;
}
