#include<iostream>
using namespace std;
int main()
{
int rev=0,rem=0,a,b,x,f;
cout<<endl<<"Enter Numbers =>";
cin>>a;
x=a;
while(a>0)
{
	rem=a%10;
	f=1;
	for(b=1;b<=rem;b++)
	{
		f=f*b;
	}
	rev=rev+f;
	a=a/10;
}
cout<<endl<<" Reverse ="<<rev<<" Number ="<<a;
if(rev==x)
{
	cout<<endl<<"Yepp, Number is a krishnamurthy :)";
}
else
{
	cout<<endl<<"Nope, Number is not a krishnamurthy :(";
}






return 0;
}
